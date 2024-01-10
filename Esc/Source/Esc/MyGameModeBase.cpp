// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

    // ���� ���� �̸��� �����ɴϴ�.
    FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this, true);

    // ���� �̸��� ���� ���콺 ���ü��� �����մϴ�.
    if (CurrentLevelName == "Level0" || CurrentLevelName == "Level2")
    {
        APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
        if (PlayerController)
        {
            PlayerController->bShowMouseCursor = true; // ���콺 ���̱�
            PlayerController->bEnableClickEvents = true; // Ŭ�� �̺�Ʈ Ȱ��ȭ
            PlayerController->bEnableMouseOverEvents = true; // ���콺 ���� �̺�Ʈ Ȱ��ȭ
        }
    }
    else
    {
        // �ٸ� ���������� ���콺 �����
        APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
        if (PlayerController)
        {
            PlayerController->bShowMouseCursor = false; // ���콺 �����
            PlayerController->bEnableClickEvents = false; // Ŭ�� �̺�Ʈ ��Ȱ��ȭ
            PlayerController->bEnableMouseOverEvents = false; // ���콺 ���� �̺�Ʈ ��Ȱ��ȭ
        }
    }

}
