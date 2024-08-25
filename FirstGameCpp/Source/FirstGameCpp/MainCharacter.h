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

	//����ģ��
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	USkeletalMesh* SkeletalMesh;

	//�����ҡ��
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	USpringArmComponent* SpringArmComponent;

	//�����
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	UCameraComponent* CameraComponent;

	//�Ƿ��ƶ�
	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	bool IsMoving = false;

	UPROPERTY(EditInstanceOnly,Category = "Basic Config")
	UAnimSequence* AnimSequence;


	//վ������
	FString Idle = TEXT("/Script/Engine.AnimSequence'/Game/Characters/Mannequins/Animations/Manny/MM_Idle.MM_Idle'");
	//�ܲ�
	FString Jog = TEXT("/Script/Engine.AnimSequence'/Game/Characters/Mannequins/Animations/Manny/MM_Run_Fwd.MM_Run_Fwd'");
	//��Ծ
	FString JumpAnim = TEXT("/Script/Engine.AnimSequence'/Game/Characters/Mannequins/Animations/Manny/MM_Jump.MM_Jump'");
	FString JumpLoopAnim = TEXT("/Script/Engine.AnimSequence'/Game/Characters/Mannequins/Animations/Manny/MM_Land.MM_Land'");
	
	void AnimPlay(FString Value, bool loop = false);

	FString GetPlayingAnimName();

	void ThirdPerson();

private:
	void Construct();
	void CreateModel();
};
