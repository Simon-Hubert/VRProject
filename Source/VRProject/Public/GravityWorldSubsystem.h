// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GravityWorldSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class VRPROJECT_API UGravityWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GravityWorldSubsystem")
	void InitGravityWorldSubsystem();

	UFUNCTION(BlueprintCallable, Category = "GravityWorldSubsystem")
	float GetGlobalGravityZ() const;
	
	UFUNCTION(BlueprintCallable, Category = "GravityWorldSubsystem")
	void SetGlobalGravityZ(float gravity);	
};
