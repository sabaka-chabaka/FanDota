// 2026 sabaka-chabaka

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HeroBase.generated.h"

class UModifier;

UCLASS(Blueprintable)
class FANDOTA_API AHeroBase : public ACharacter
{
	GENERATED_BODY()

public:
	AHeroBase();
	
	virtual void Tick(float DeltaSeconds) override;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY()
	TArray<UModifier*> Modifiers;
	
public:
	virtual void ApplyModifier(TSubclassOf<UModifier>);
};
