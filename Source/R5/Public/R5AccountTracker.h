#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5DataKeepers -ObjectName=R5DataKeeper_AccountTracker -FallbackName=R5DataKeeper_AccountTracker
#include "R5DataKeeper_AccountTracker.h"
#include "R5AccountTracker.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AccountTracker : public UR5DataKeeper_AccountTracker {
    GENERATED_BODY()
public:
    UR5AccountTracker();

};

