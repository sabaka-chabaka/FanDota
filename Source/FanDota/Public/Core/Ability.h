// 2026 sabaka-chabaka

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Ability.generated.h"

class AHeroBase;

UENUM(BlueprintType)
enum EAbilityTargetType
{
	None,
	Point,
	Unit,
	Self
};

UCLASS(Blueprintable)
class FANDOTA_API UAbility : public UObject
{
	GENERATED_BODY()
	
public:
	UAbility();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	FString AbilityName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	FString Description;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	float ManaCost;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	float Cooldown;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	EAbilityTargetType TargetType;
	
	UPROPERTY()
	float LastCastTime;
	
	virtual bool CanCast(AHeroBase* Caster);

	virtual void Activate(AHeroBase* Caster, AActor* Target);

	virtual void ActivatePoint(AHeroBase* Caster, FVector Location);

protected:
	void StartCooldown(const AHeroBase* Caster);
};