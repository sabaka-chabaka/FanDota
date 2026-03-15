// 2026 sabaka-chabaka

#pragma once

#include "CoreMinimal.h"
#include "Core/Ability.h"
#include "DogburnerInflammatorySaliva.generated.h"

UCLASS()
class FANDOTA_API UDogburnerInflammatorySaliva : public UAbility
{
	GENERATED_BODY()
	
public:
	UDogburnerInflammatorySaliva();
	
	virtual void Activate(AHeroBase* Caster, AActor* Target) override;
};