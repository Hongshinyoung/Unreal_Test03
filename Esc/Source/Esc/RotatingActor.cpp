// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActor.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // 기본 시네마틱 루트 컴포넌트 생성
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // 메시 컴포넌트 생성 후 루트 컴포넌트의 자식으로 설정
    RotatingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotatingMesh"));
    RotatingMesh->SetupAttachment(RootComponent);

    // 기본 메시 설정 ("Shape_Cube"를 사용할 큐브 메시 이름으로 변경)
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
    if (MeshAsset.Succeeded())
    {
        RotatingMesh->SetStaticMesh(MeshAsset.Object);
    }

}

// Called when the game starts or when spawned
void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // 자체 축 주위로 오브젝트 회전
    FRotator NewRotation = GetActorRotation();
   // NewRotation.Yaw += RotationSpeed * DeltaTime; // 회전 속도 조절 가능
    NewRotation.Roll += RotationSpeed * DeltaTime; // 회전 속도 조절 가능
    SetActorRotation(NewRotation);
}

