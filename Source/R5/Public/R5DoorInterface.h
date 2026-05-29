#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "R5DoorInterface.generated.h"

UINTERFACE(MinimalAPI)
class UR5DoorInterface : public UInterface {
    GENERATED_BODY()
};

class IR5DoorInterface : public IInterface {
    GENERATED_BODY()
public:
};

