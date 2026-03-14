// 2026 sabaka-chabaka

#include "Public/Core/Modifier.h"

void UModifier::OnApply(AHeroBase* InTarget)
{
	Target = InTarget;
	StartTime = Target->GetWorld()->GetTimeSeconds();
}

void UModifier::OnTick(float DeltaSeconds)
{
}

void UModifier::OnRemove()
{
}

bool UModifier::IsExpired()
{
	float Time = Target->GetWorld()->GetTimeSeconds();
	
	return (Time - StartTime) >= Duration ? Duration != -1 : false;
}