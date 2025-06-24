// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "CustomCoreGameplayAbility.generated.h"
/**
 * 
 */
class UCharacterStorageComponent;
UCLASS()
class PARADISE_SEEKERS_API UCustomCoreGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "CustomCoreGameplayAbility")
	void SetupVariables(FGameplayTag Tag);
	//UFUNCTION(BlueprintCallable, Category = "CustomCoreGameplayAbility")
	//void ResetTag();
	
};
