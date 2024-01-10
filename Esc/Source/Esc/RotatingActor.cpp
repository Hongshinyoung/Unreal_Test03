// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActor.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // �⺻ �ó׸�ƽ ��Ʈ ������Ʈ ����
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // �޽� ������Ʈ ���� �� ��Ʈ ������Ʈ�� �ڽ����� ����
    RotatingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotatingMesh"));
    RotatingMesh->SetupAttachment(RootComponent);

    // �⺻ �޽� ���� ("Shape_Cube"�� ����� ť�� �޽� �̸����� ����)
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

    // ��ü �� ������ ������Ʈ ȸ��
    FRotator NewRotation = GetActorRotation();
   // NewRotation.Yaw += RotationSpeed * DeltaTime; // ȸ�� �ӵ� ���� ����
    NewRotation.Roll += RotationSpeed * DeltaTime; // ȸ�� �ӵ� ���� ����
    SetActorRotation(NewRotation);
}

