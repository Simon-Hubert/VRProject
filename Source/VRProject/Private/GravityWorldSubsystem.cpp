// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityWorldSubsystem.h"

void UGravityWorldSubsystem::InitGravityWorldSubsystem()
{
	if (AWorldSettings* WorldSettings = GetWorld()->GetWorldSettings())
	{
		UE_LOGFMT(LogTemp, Warning, "Init Gravity");
		WorldSettings->bGlobalGravitySet = true;
		WorldSettings->GlobalGravityZ = 0.0f;
	}
}

void UGravityWorldSubsystem::SetGlobalGravityZ(float gravity)
{
	if (AWorldSettings* WorldSettings = GetWorld()->GetWorldSettings())
	{
		UE_LOGFMT(LogTemp, Warning, "Setting Gravity");
		WorldSettings->GlobalGravityZ = gravity;
	}
}
