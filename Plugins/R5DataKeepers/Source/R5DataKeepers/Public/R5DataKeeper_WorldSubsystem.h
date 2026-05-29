#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5DataKeeper_WorldSubsystem.generated.h"

UCLASS(Blueprintable)
class UR5DataKeeper_WorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5DataKeeper_WorldSubsystem();

};

