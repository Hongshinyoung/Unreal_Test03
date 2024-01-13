// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
    // 이 캐릭터가 프레임마다 Tick()을 호출하도록 설정합니다.  이 설정이 필요 없는 경우 비활성화하면 퍼포먼스가 향상됩니다.
    PrimaryActorTick.bCanEverTick = true;

    // 클래스 컴포넌트 인스턴스화
    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));

    //캐릭터 메시 트랜스폼의 위치와 회전을 설정합니다.
    GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -90.0f), FQuat(FRotator(0.0f, -90.0f, 0.0f)));

    // 클래스 컴포넌트를 디폴트 캐릭터의 스켈레탈 메시 컴포넌트에 어태치합니다.
    SpringArmComp->SetupAttachment(GetMesh());
    CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

    //스프링 암의 클래스 변수를 설정합니다.
    SpringArmComp->bUsePawnControlRotation = true;

    //캐릭터 무브먼트 컴포넌트의 클래스 변수를 설정합니다.
    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->bUseControllerDesiredRotation = true;
    GetCharacterMovement()->bIgnoreBaseRotation = true;

    bCanDoubleJump = true;
    DoubleJumpStrength = 1000.0f;

    //중력값 
    GetCharacterMovement()->GravityScale = 2.0f; 

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::MoveForward(float AxisValue)
{
    if ((Controller != nullptr) && (AxisValue != 0.0f))
    {
        // 앞쪽 찾기
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // 앞쪽 벡터 구하기
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direction, AxisValue);
    }
}

void APlayerCharacter::MoveRight(float AxisValue)
{
    if ((Controller != nullptr) && (AxisValue != 0.0f))
    {
        // 오른쪽 찾기
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        // 오른쪽 벡터 구하기
        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        // 해당 방향으로 이동 추가
        AddMovementInput(Direction, AxisValue);
    }
}

//void APlayerCharacter::MoveForward(float AxisValue)
//{
//    if ((Controller != nullptr) && (AxisValue != 0.0f))
//    {
//        // 앞쪽 찾기
//        const FRotator Rotation = Controller->GetControlRotation();
//        const FRotator YawRotation(0, Rotation.Yaw, 0);
//
//        // 앞쪽 벡터 구하기
//        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
//
//        // 해당 방향으로 이동 추가
//        AddMovementInput(Direction, AxisValue);
//
//        // 이동 방향으로 캐릭터를 회전
//        if (!Direction.IsNearlyZero())
//        {
//            FRotator NewRotation = Direction.Rotation();
//            SetActorRotation(FRotator(0.0f, NewRotation.Yaw, 0.0f));
//        }
//    }
//}
//
//void APlayerCharacter::MoveRight(float AxisValue)
//{
//    if ((Controller != nullptr) && (AxisValue != 0.0f))
//    {
//        // 오른쪽 찾기
//        const FRotator Rotation = Controller->GetControlRotation();
//        const FRotator YawRotation(0, Rotation.Yaw, 0);
//
//        // 오른쪽 벡터 구하기
//        const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
//
//        // 해당 방향으로 이동 추가
//        AddMovementInput(Direction, AxisValue);
//
//        // 이동 방향으로 캐릭터를 회전
//        if (!Direction.IsNearlyZero())
//        {
//            FRotator NewRotation = Direction.Rotation();
//            SetActorRotation(FRotator(0.0f, NewRotation.Yaw, 0.0f));
//        }
//    }
//}


void APlayerCharacter::BeginSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = dashSpeed; // 1000
}

void APlayerCharacter::EndSprint()
{
    GetCharacterMovement()->MaxWalkSpeed = walkSpeed; // 600
}

void APlayerCharacter::BeginCrouch()
{
    Crouch();
}

void APlayerCharacter::EndCrouch()
{
    UnCrouch();
}

void APlayerCharacter::Landed(const FHitResult& Hit)
{
    Super::Landed(Hit);

    bCanDoubleJump = true;
}

void APlayerCharacter::DoubleJump()
{
    if (bCanDoubleJump && GetCharacterMovement()->IsFalling())
    {
        FVector DoubleJumVelocity = FVector(0.0f, 0.0f, DoubleJumpStrength);
        LaunchCharacter(DoubleJumVelocity, true, true);

        bCanDoubleJump = false;
    }
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
    PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APlayerCharacter::BeginCrouch);
    PlayerInputComponent->BindAction("Crouch", IE_Released, this, &APlayerCharacter::EndCrouch);
    PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &APlayerCharacter::BeginSprint);
    PlayerInputComponent->BindAction("Dash", IE_Released, this, &APlayerCharacter::EndSprint);
    PlayerInputComponent->BindAction("DoubleJump", IE_Pressed, this, &APlayerCharacter::DoubleJump);

}



