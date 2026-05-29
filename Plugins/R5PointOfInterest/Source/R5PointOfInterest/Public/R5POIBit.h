#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5POIBit.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5POINTOFINTEREST_API UR5POIBit : public UObject {
    GENERATED_BODY()
public:
    UR5POIBit();

};

