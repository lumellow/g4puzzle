// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActorCPP.h"

// Sets default values
ATestActorCPP::ATestActorCPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActorCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActorCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (ActorSpeed < 100)
	{
		ActorSpeed += 100 * DeltaTime;
		FVector CurrentTransform = GetActorLocation();
		CurrentTransform.X = ActorSpeed;
		SetActorLocation(CurrentTransform);
	}
}

