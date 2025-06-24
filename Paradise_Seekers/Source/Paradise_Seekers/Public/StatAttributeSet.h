// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "StatAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PARADISE_SEEKERS_API UStatAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayAttributeData HealthPoint;
	ATTRIBUTE_ACCESSORS_BASIC(UStatAttributeSet,HealthPoint);

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS_BASIC(UStatAttributeSet,Speed);

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayAttributeData AttackPoint;
	ATTRIBUTE_ACCESSORS_BASIC(UStatAttributeSet,AttackPoint)

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayAttributeData MagicAttackPoint;
	ATTRIBUTE_ACCESSORS_BASIC(UStatAttributeSet,MagicAttackPoint);

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayAttributeData AttackDefense;
	ATTRIBUTE_ACCESSORS_BASIC(UStatAttributeSet,AttackDefense);

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FGameplayAttributeData MagicDefense;
	ATTRIBUTE_ACCESSORS_BASIC(UStatAttributeSet,MagicDefense);
};
