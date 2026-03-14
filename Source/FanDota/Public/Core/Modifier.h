// 2026 sabaka-chabaka

#pragma once

#include "CoreMinimal.h"
#include "HeroBase.h"
#include "UObject/Object.h"
#include "Modifier.generated.h"

UCLASS()
class FANDOTA_API UModifier : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	AHeroBase* Target;
	
	// Make -1 for infinite
	UPROPERTY(EditAnywhere)
	float Duration;
	
	UPROPERTY()
	float StartTime;
	
	virtual void Apply(AHeroBase* Target);
	
	virtual void OnApply(AHeroBase* InTarget);
	virtual void OnTick(float DeltaSeconds);
	virtual void OnRemove();
	bool IsExpired();
};
