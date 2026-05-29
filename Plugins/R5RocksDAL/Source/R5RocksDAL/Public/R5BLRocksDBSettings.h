#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLDBSettings -FallbackName=R5BLDBSettings
#include "R5BLDBSettings.h"
#include "R5BLRocksDBSettings.generated.h"

UCLASS(Blueprintable)
class R5ROCKSDAL_API UR5BLRocksDBSettings : public UR5BLDBSettings {
    GENERATED_BODY()
public:
    UR5BLRocksDBSettings();

};

