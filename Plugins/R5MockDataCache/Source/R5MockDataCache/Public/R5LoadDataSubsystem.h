#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5LoadDataSubsystem.generated.h"

UCLASS(Blueprintable)
class R5MOCKDATACACHE_API UR5LoadDataSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5LoadDataSubsystem();

};

