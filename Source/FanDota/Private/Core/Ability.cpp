// 2026 sabaka-chabaka

#include "Public/Core/Ability.h"

#include "Public/Core/HeroBase.h"

UAbility::UAbility()
{
}

bool UAbility::CanCast(AHeroBase* Caster)
{
	if (!Caster)
		return false;

	float Time = Caster->GetWorld()->GetTimeSeconds();

	if (Time - LastCastTime < Cooldown)
		return false;

	//if (Caster->Stats.Mana < ManaCost)
	//	return false;

	return true;
}

void UAbility::Activate(AHeroBase* Caster, AActor* Target)
{
	if (!CanCast(Caster))
		return;

	//Caster->Stats.Mana -= ManaCost;

	StartCooldown(Caster);
}

void UAbility::ActivatePoint(AHeroBase* Caster, FVector Location)
{
	if (!CanCast(Caster))
		return;

	//Caster->Stats.Mana -= ManaCost;

	StartCooldown(Caster);
}

void UAbility::StartCooldown(const AHeroBase* Caster)
{
	LastCastTime = Caster->GetWorld()->GetTimeSeconds();
}

//TODO: NORMALLY REALIZE THIS MECHANIC