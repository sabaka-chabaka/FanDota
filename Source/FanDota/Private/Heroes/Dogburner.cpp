// 2026 sabaka-chabaka

#include "Heroes/Dogburner.h"

#include "Abilities/DogburnerInflammatorySaliva.h"

ADogburner::ADogburner()
{
	PrimaryActorTick.bCanEverTick = true;
	UAbility* Saliva = CreateDefaultSubobject<UDogburnerInflammatorySaliva>(TEXT("SalivaAbility"));
	Abilities.Add(Saliva);
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