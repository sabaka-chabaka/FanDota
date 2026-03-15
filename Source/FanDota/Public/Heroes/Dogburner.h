// 2026 sabaka-chabaka

#pragma once

#include "CoreMinimal.h"
#include "Core/HeroBase.h"
#include "Dogburner.generated.h"

UCLASS()
class FANDOTA_API ADogburner : public AHeroBase
{
	GENERATED_BODY()

public:
	ADogburner();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
