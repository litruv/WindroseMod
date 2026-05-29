#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5WorldSeedLocalSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class R5DATAKEEPERS_API UR5WorldSeedLocalSettings : public UObject {
    GENERATED_BODY()
public:
    UR5WorldSeedLocalSettings();

};

