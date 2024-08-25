// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainCharacter.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTGAMECPP_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AMyPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupInputComponent() override;
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	bool IsJumpCouldPlay = true;
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	bool IsJogCouldPlay = true;
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	bool IsIdleCouldPlay = true;

	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	AMainCharacter* Main;

	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	float ForwardValue;

	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	float RightValue;
 
private:
	void Construct();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Jump();
	void StopJumping();
	void MoveAnimSwitch();
};
