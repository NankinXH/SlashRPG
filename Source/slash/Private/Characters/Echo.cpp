// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Echo.h"

// Sets default values
AEcho::AEcho()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEcho::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEcho::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEcho::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

