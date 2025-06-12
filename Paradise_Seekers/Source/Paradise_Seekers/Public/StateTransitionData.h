// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StateTransitionData.generated.h"

/**
 * 
 */
class UCustomState;
UCLASS()
class PARADISE_SEEKERS_API UStateTransitionData : public UDataAsset
{
	GENERATED_BODY()
	public:

	bool CanTransit;
	TObjectPtr<UCustomState> OnAttackInput;
	TObjectPtr<UCustomState> OnAttackHoldInput;
	TObjectPtr<UCustomState> OnAttackReleaseInput;

	TObjectPtr<UCustomState> OnSkill1Input;
	TObjectPtr<UCustomState> OnSkill1HoldInput;
	TObjectPtr<UCustomState> OnSkill1ReleaseInput;

	TObjectPtr<UCustomState> OnSkill2Input;
	TObjectPtr<UCustomState> OnSkill2HoldInput;
	TObjectPtr<UCustomState> OnSkill2ReleaseInput;

	TObjectPtr<UCustomState> OnSkill3Input;
	TObjectPtr<UCustomState> OnSkill3HoldInput;
	TObjectPtr<UCustomState> OnSkill3ReleaseInput;

	TObjectPtr<UCustomState> OnDodgeInput;
	TObjectPtr<UCustomState> OnDodgeHoldInput;
	TObjectPtr<UCustomState> OnDodgeReleaseInput;
};
