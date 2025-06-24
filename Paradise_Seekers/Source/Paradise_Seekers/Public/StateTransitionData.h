// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StateTransitionData.generated.h"

/**
 * 
 */
class UCustomState;
class UCustomStateMachine;
UCLASS(blueprintable)
class PARADISE_SEEKERS_API UStateTransitionData : public UDataAsset
{
	GENERATED_BODY()
	public:

	bool CanTransit;
	//void InitializeStates(UCustomStateMachine* Outer);
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnAttackInputClass;
	TObjectPtr<UCustomState> OnAttackInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnAttackHoldInputClass;
	TObjectPtr<UCustomState> OnAttackHoldInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnAttackReleaseInputClass;
	TObjectPtr<UCustomState> OnAttackReleaseInput;
	
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill1InputClass;
	TObjectPtr<UCustomState> OnSkill1Input;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill1HoldInputClass;
	TObjectPtr<UCustomState> OnSkill1HoldInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill1ReleaseInputClass;
	TObjectPtr<UCustomState> OnSkill1ReleaseInput;
	
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill2InputClass;
	TObjectPtr<UCustomState> OnSkill2Input;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill2HoldInputClass;
	TObjectPtr<UCustomState> OnSkill2HoldInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill2ReleaseInputClass;
	TObjectPtr<UCustomState> OnSkill2ReleaseInput;

	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill3InputClass;
	TObjectPtr<UCustomState> OnSkill3Input;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill3HoldInputClass;
	TObjectPtr<UCustomState> OnSkill3HoldInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnSkill3ReleaseInputClass;
	TObjectPtr<UCustomState> OnSkill3ReleaseInput;

	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnDodgeInputClass;
	TObjectPtr<UCustomState> OnDodgeInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnDodgeHoldInputClass;
	TObjectPtr<UCustomState> OnDodgeHoldInput;
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateTransitionData")
	//TSubclassOf<UCustomState> OnDodgeReleaseInputClass;
	TObjectPtr<UCustomState> OnDodgeReleaseInput;
};
