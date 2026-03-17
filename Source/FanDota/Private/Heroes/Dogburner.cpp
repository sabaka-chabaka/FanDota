// 2026 sabaka-chabaka

#include "Heroes/Dogburner.h"

#include "Abilities/DogburnerInflammatorySaliva.h"
#include "Abilities/DogburnerScorchedSkin.h"

ADogburner::ADogburner()
{
	PrimaryActorTick.bCanEverTick = true;
	UAbility* Saliva = CreateDefaultSubobject<UDogburnerInflammatorySaliva>(TEXT("DogburnerSalivaAbility"));
	Abilities.Add(Saliva);
	PassiveAbility = CreateDefaultSubobject<UDogburnerScorchedSkin>(TEXT("DogburnerScorchedSkin"));
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