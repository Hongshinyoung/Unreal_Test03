// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Amplitude = 100.0f; 
	Speed = 1.0f;


	// CubeMesh �ʱ�ȭ
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh; // CubeMesh�� ��Ʈ ������Ʈ�� ����

	// CubeMesh �ε�
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (CubeMeshAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(CubeMeshAsset.Object);
		CubeMesh->SetWorldScale3D(FVector(6.0f, 4.0f, 0.5f));
	}

	//�ʱ� ��ġ ����
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

	// sin ������ ������� �����̴� ��ġ ���
	float MoveAmount = Amplitude * FMath::Sin(GetGameTimeSinceCreation() * Speed);
	FVector NewLocation = InitialLocation + FVector(0.0f, 0.0f, MoveAmount);
	SetActorLocation(NewLocation);

}

