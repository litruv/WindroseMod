#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5BLUnrealServiceManager.generated.h"

UCLASS(Blueprintable)
class R5BLCOMMON_API UR5BLUnrealServiceManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5BLUnrealServiceManager();

};

