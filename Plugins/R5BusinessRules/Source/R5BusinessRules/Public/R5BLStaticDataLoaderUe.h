#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5BLStaticDataLoaderUe.generated.h"

UCLASS(Blueprintable)
class R5BUSINESSRULES_API UR5BLStaticDataLoaderUe : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5BLStaticDataLoaderUe();

};

