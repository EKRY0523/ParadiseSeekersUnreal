// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomState.generated.h"

/**
 * 
 */

class UCustomStateMachine;
class UStateTransitionData;

UCLASS()
class PARADISE_SEEKERS_API UCustomState : public UObject
{
	GENERATED_BODY()
	public:
	UCustomState();
	TObjectPtr<UStateTransitionData> StateData;

	virtual void OnEnter(UCustomStateMachine* Owner);
	virtual void OnTick(UCustomStateMachine* Owner);
	virtual void OnExit(UCustomStateMachine* Owner);
	
	virtual void OnAttackInput(UCustomStateMachine* Owner);
	virtual void OnAttackHoldInput(UCustomStateMachine* Owner);
	virtual void OnAttackReleaseInput(UCustomStateMachine* Owner);
	
	virtual void OnSkill1Input(UCustomStateMachine* Owner);
	virtual void OnSkill1HoldInput(UCustomStateMachine* Owner);
	virtual void OnSkill1ReleaseInput(UCustomStateMachine* Owner);

	virtual void OnSkill2Input(UCustomStateMachine* Owner);
	virtual void OnSkill2HoldInput(UCustomStateMachine* Owner);
	virtual void OnSkill2ReleaseInput(UCustomStateMachine* Owner);

	virtual void OnSkill3Input(UCustomStateMachine* Owner);
	virtual void OnSkill3HoldInput(UCustomStateMachine* Owner);
	virtual void OnSkill3ReleaseInput(UCustomStateMachine* Owner);

	virtual void OnDodgeInput(UCustomStateMachine* Owner);
	virtual void OnDodgeHoldInput(UCustomStateMachine* Owner);
	virtual void OnDodgeReleaseInput(UCustomStateMachine* Owner);
};
