// 2026 sabaka-chabaka

#include "Core/HeroPlayerController.h"

#include "Blueprint/AIBlueprintHelperLibrary.h"

AHeroPlayerController::AHeroPlayerController()
{
	bShowMouseCursor = true;
}

void AHeroPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AHeroPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	InputComponent->BindAction("Dest", IE_Pressed, this, &AHeroPlayerController::SetDestinationPressed);
}

void AHeroPlayerController::SetDestinationPressed()
{
	FHitResult Hit;

	if (bool bHitSuccessful = GetHitResultUnderCursor(ECC_Visibility, true, Hit))
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Hit.Location);
	}
}