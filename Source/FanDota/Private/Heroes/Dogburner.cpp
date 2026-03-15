// 2026 sabaka-chabaka

#include "Heroes/Dogburner.h"

ADogburner::ADogburner()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADogburner::BeginPlay()
{
	Super::BeginPlay();
}

void ADogburner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADogburner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}