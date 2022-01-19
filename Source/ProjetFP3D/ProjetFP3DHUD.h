// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ProjetFP3DHUD.generated.h"

UCLASS()
class AProjetFP3DHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProjetFP3DHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

