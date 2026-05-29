#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5N_Common.generated.h"

UCLASS(Blueprintable)
class R5NCOMMON_API UR5N_Common : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5N_Common();

};

