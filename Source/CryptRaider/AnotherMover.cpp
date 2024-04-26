// Fill out your copyright notice in the Description page of Project Settings.


#include "AnotherMover.h"

// Sets default values for this component's properties
UAnotherMover::UAnotherMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	UE_LOG(LogTemp, Warning, TEXT("AnotherMover start"));

	// ...
}


// Called when the game starts
void UAnotherMover::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAnotherMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UE_LOG(LogTemp, Warning, TEXT("AnotherMover ticking"));
}

