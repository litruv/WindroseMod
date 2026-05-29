#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5DebugHUDExtension.generated.h"

UCLASS(Abstract, Blueprintable)
class R5DEBUGHUD_API UR5DebugHUDExtension : public UObject {
    GENERATED_BODY()
public:
    UR5DebugHUDExtension();

};

