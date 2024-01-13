// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class ESC_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//스프링 암 컴포넌트가 플레이어 뒤에 있는 카메라를 따라갑니다.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComp;
	//플레이어가 카메라를 따라갑니다.
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComp;

	//앞쪽/뒤쪽 입력을 위해 호출합니다.
	void MoveForward(float InputAxis);
	//왼쪽/오른쪽 입력을 위해 호출합니다.
	void MoveRight(float InputAxis);
	//캐릭터 무브먼트 속도를 스프린트 값으로 설정합니다.
	void BeginSprint();
	//캐릭터 무브먼트 속도를 디폴트 속도 값으로 다시 설정합니다.
	void EndSprint();
	//캐릭터에게 앉기를 요청합니다.
	void BeginCrouch();
	//캐릭터에게 앉기 종료를 요청합니다.
	void EndCrouch();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Character")
	bool bCanDoubleJump;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Character")
	float DoubleJumpStrength;

	virtual void Landed(const FHitResult& Hit) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	float dashSpeed = 1000.0f;
	float walkSpeed = 600.0f;

	UFUNCTION()
	void DoubleJump();
};
