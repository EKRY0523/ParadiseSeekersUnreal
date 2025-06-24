// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomStateMachine.generated.h"

class UCustomState;
class UStateTransitionData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PARADISE_SEEKERS_API UCustomStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCustomStateMachine();
	
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "StateList")
	TSet<UCustomState*> StateList;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	UPROPERTY(blueprintReadWrite, EditAnywhere, Category = "State")
	TObjectPtr<UCustomState> CurrentState;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void ChangeState(UCustomState* NewState);
	
		
};
