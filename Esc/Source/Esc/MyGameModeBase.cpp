// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

    // 현재 레벨 이름을 가져옵니다.
    FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this, true);

    // 레벨 이름에 따라 마우스 가시성을 변경합니다.
    if (CurrentLevelName == "Level0" || CurrentLevelName == "Level2")
    {
        APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
        if (PlayerController)
        {
            PlayerController->bShowMouseCursor = true; // 마우스 보이기
            PlayerController->bEnableClickEvents = true; // 클릭 이벤트 활성화
            PlayerController->bEnableMouseOverEvents = true; // 마우스 오버 이벤트 활성화
        }
    }
    else
    {
        // 다른 레벨에서는 마우스 숨기기
        APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
        if (PlayerController)
        {
            PlayerController->bShowMouseCursor = false; // 마우스 숨기기
            PlayerController->bEnableClickEvents = false; // 클릭 이벤트 비활성화
            PlayerController->bEnableMouseOverEvents = false; // 마우스 오버 이벤트 비활성화
        }
    }

}
