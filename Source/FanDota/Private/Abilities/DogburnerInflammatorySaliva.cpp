// 2026 sabaka-chabaka

#include "Abilities/DogburnerInflammatorySaliva.h"

#include "Core/HeroBase.h"

UDogburnerInflammatorySaliva::UDogburnerInflammatorySaliva()
{
	AbilityName = "Inflammatory saliva";
	Description = "The hero lets out a terrifying roar and spits burning tar at the target area. Enemies caught in the blast take initial damage and are slowed. They are left with a sticky layer for 4 seconds.";
	ManaCost = 50.0f;
	Cooldown = 15.0f;
	TargetType = Unit;
}

void UDogburnerInflammatorySaliva::Activate(AHeroBase* Caster, AActor* Target)
{
	Super::Activate(Caster, Target);

	if (AHeroBase* TargetHero = Cast<AHeroBase>(Target))
	{
		
	}
}
