#pragma once
#include "CoreMinimal.h"
#include "R5Aimable.h"
#include "R5KinematicProjectileSetup.h"
#include "R5ParabolaProjectileSetup.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5ParabolaProjectileSetup : public UR5KinematicProjectileSetup, public IR5Aimable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GravityAcceleration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MagnusEffectDistance;
    
    UR5ParabolaProjectileSetup();


    // Fix for true pure virtual functions not being implemented
};

