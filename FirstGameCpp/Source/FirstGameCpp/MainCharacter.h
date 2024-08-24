// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MainCharacter.generated.h"



UCLASS()
class FIRSTGAMECPP_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//骨骼模型
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	USkeletalMesh* SkeletalMesh;

	//摄像机摇臂
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	USpringArmComponent* SpringArmComponent;

	//摄像机
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	UCameraComponent* CameraComponent;

	//是否移动
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	bool IsMoving = false;

	
	void ThirdPerson();

private:
	void Construct();
	void CreateModel();
};
