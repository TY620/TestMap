// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

AMyGameModeBase::AMyGameModeBase()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("안녕하세요"));
	}
		//언리얼에서 다국어 지원하기 때문에 문자열은 TEXT
		UE_LOG(LogTemp, Warning, TEXT("Hello World"))
	
}
