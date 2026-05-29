#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5LoadingScreenManager.generated.h"

UCLASS(Blueprintable)
class R5LOADINGSCREEN_API UR5LoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5LoadingScreenManager();

};

