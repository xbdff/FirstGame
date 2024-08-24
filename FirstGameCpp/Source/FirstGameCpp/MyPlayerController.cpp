// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

// Sets default values
AMyPlayerController::AMyPlayerController()
{
	this->Construct();
	
}

// Called when the game starts or when spawned
void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	Main = Cast<AMainCharacter>(GetCharacter());
}

// Called every frame
void AMyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &AMyPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMyPlayerController::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMyPlayerController::StopJumping);
}

void AMyPlayerController::Construct()
{
	InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("InputComponent"));

}

void AMyPlayerController::MoveForward(float Value)
{
	ForwardValue = Value;

	if (Value != 0) {
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0); 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		Main->AddMovementInput(Direction, Value);

	}
	if (ForwardValue || RightValue) {
		Main->IsMoving = true;
	}
	else
		Main->IsMoving = false;
}

void AMyPlayerController::MoveRight(float Value)
{
	RightValue = Value;
	if (Value != 0) {
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		Main->AddMovementInput(Direction, Value);

	}
	if (ForwardValue || RightValue) {
		Main->IsMoving = true;
	}
	else
		Main->IsMoving = false;
}

void AMyPlayerController::Jump()
{
	Main-> Jump();
}

void AMyPlayerController::StopJumping()
{
	Main->StopJumping();
}