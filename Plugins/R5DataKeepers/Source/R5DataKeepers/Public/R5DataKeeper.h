#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5DataKeeperStateLogger.h"
#include "R5DataKeeper.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeper : public UGameInstanceSubsystem, public IR5DataKeeperStateLogger {
    GENERATED_BODY()
public:
    UR5DataKeeper();


    // Fix for true pure virtual functions not being implemented
};

