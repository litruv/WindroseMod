#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5WorldSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5WorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5WorldSubsystem();

};

