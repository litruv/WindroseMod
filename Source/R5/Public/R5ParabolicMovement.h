#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5PrecalculatedMovementInterface.h"
#include "R5ParabolicMovement.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ParabolicMovement : public UObject, public IR5PrecalculatedMovementInterface {
    GENERATED_BODY()
public:
    UR5ParabolicMovement();


    // Fix for true pure virtual functions not being implemented
};

