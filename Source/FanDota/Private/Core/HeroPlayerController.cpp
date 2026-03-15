// 2026 sabaka-chabaka

#include "Core/HeroPlayerController.h"

#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Core/HeroBase.h"
#include "Modifiers/StunModifier.h"

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
	if (AHeroBase* Hero = Cast<AHeroBase>(GetPawn()))
	{
		if (Hero->Modifiers.Contains(UStunModifier::StaticClass())) return;
	}
	
	FHitResult Hit;
	
	if (GetHitResultUnderCursor(ECC_Visibility, true, Hit))
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Hit.Location);
	}
}