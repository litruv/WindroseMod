#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5TerrainGeneratorSubsystem.generated.h"

UCLASS(Blueprintable)
class R5TERRAINGENERATORAPI_API UR5TerrainGeneratorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5TerrainGeneratorSubsystem();

};

