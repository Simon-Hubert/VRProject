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

float UGravityWorldSubsystem::GetGlobalGravityZ() const
{
	if (AWorldSettings* WorldSettings = GetWorld()->GetWorldSettings())
	{
		UE_LOGFMT(LogTemp, Warning, "Setting Gravity");
		return WorldSettings->GlobalGravityZ;
	}

	return -1.23456789;
}

void UGravityWorldSubsystem::SetGlobalGravityZ(float gravity)
{
	if (AWorldSettings* WorldSettings = GetWorld()->GetWorldSettings())
	{
		UE_LOGFMT(LogTemp, Warning, "Setting Gravity");
		WorldSettings->GlobalGravityZ = gravity;
	}
}
