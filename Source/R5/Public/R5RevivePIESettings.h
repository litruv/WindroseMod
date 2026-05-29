#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5RevivePIESettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class R5_API UR5RevivePIESettings : public UObject {
    GENERATED_BODY()
public:
    UR5RevivePIESettings();

};

