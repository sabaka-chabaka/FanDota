// 2026 sabaka-chabaka

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HeroPlayerController.generated.h"

UCLASS()
class FANDOTA_API AHeroPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHeroPlayerController();
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	
	void SetDestinationPressed();
};