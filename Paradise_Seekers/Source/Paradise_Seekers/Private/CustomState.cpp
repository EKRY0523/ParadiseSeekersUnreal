// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomState.h"

#include "CustomStateMachine.h"
#include "StateTransitionData.h"
UCustomState::UCustomState()
{
	
}

void UCustomState::OnEnter(UCustomStateMachine* Owner)
{
	//statelogic here
}

void UCustomState::OnTick(UCustomStateMachine* Owner)
{
	//transit effect here
}

void UCustomState::OnExit(UCustomStateMachine* Owner)
{
	//do shit here
}

void UCustomState::OnAttackInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnAttackInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnAttackHoldInput);
	}
}

void UCustomState::OnAttackHoldInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnAttackHoldInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnAttackInput);
	}
}

void UCustomState::OnAttackReleaseInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnAttackReleaseInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnAttackReleaseInput);
	}
}

void UCustomState::OnSkill1Input(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill1Input!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill1Input);
	}
}

void UCustomState::OnSkill1HoldInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill1HoldInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill1HoldInput);
	}
}

void UCustomState::OnSkill1ReleaseInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill1ReleaseInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill1ReleaseInput);
	}
}

void UCustomState::OnSkill2Input(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill2Input!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill2Input);
	}
}

void UCustomState::OnSkill2HoldInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill2HoldInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill2HoldInput);
	}
}

void UCustomState::OnSkill2ReleaseInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill2ReleaseInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill2ReleaseInput);
	}
}

void UCustomState::OnSkill3Input(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill3Input!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill3Input);
	}
}

void UCustomState::OnSkill3HoldInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill3HoldInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill3HoldInput);
	}
}

void UCustomState::OnSkill3ReleaseInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnSkill3ReleaseInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnSkill3ReleaseInput);
	}
}

void UCustomState::OnDodgeInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnDodgeInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnDodgeInput);
	}
}

void UCustomState::OnDodgeHoldInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnDodgeHoldInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnDodgeHoldInput);
	}
}

void UCustomState::OnDodgeReleaseInput(UCustomStateMachine* Owner)
{
	if (StateData!=nullptr && StateData->OnDodgeReleaseInput!=nullptr && StateData->CanTransit)
	{
		Owner->ChangeState(StateData->OnDodgeReleaseInput);
	}
}
