// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Amplitude = 100.0f; 
	Speed = 1.0f;


	// CubeMesh 초기화
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh; // CubeMesh를 루트 컴포넌트로 설정

	// CubeMesh 로드
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (CubeMeshAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(CubeMeshAsset.Object);
		CubeMesh->SetWorldScale3D(FVector(6.0f, 4.0f, 0.5f));
	}

	//초기 위치 저장
	InitialLocation = GetActorLocation();
}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// sin 움직임 기반으로 움직이는 위치 계산
	float MoveAmount = Amplitude * FMath::Sin(GetGameTimeSinceCreation() * Speed);
	FVector NewLocation = InitialLocation + FVector(0.0f, 0.0f, MoveAmount);
	SetActorLocation(NewLocation);

}

