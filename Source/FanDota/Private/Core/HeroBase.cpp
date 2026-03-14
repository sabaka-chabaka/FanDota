// 2026 sabaka-chabaka

#include "Public/Core/HeroBase.h"

#include "Public/Core/Modifier.h"

AHeroBase::AHeroBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AHeroBase::BeginPlay()
{
	Super::BeginPlay();
}

void AHeroBase::ApplyModifier(TSubclassOf<UModifier> ModifierClass)
{
	UModifier* Modifier = NewObject<UModifier>(this, ModifierClass);
	
	Modifier->OnApply(this);
	
	Modifiers.Add(Modifier);
}

void AHeroBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (int i = Modifiers.Num() - 1; i >= 0; i--)
	{
		UModifier* Mod = Modifiers[i];
		Mod->OnTick(DeltaTime);

		if (Mod->IsExpired())
		{
			Mod->OnRemove();
			Modifiers.RemoveAt(i);
		}
	}
}
