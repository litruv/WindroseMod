#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5POISubsystem.generated.h"

UCLASS(Blueprintable)
class R5POI_API UR5POISubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5POISubsystem();

};

