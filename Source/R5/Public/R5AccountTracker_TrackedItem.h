#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5DataKeepers -ObjectName=R5DkAccountTracker_TrackedItem -FallbackName=R5DkAccountTracker_TrackedItem
#include "R5DkAccountTracker_TrackedItem.h"
#include "R5AccountTracker_TrackedItem.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AccountTracker_TrackedItem : public UR5DkAccountTracker_TrackedItem {
    GENERATED_BODY()
public:
    UR5AccountTracker_TrackedItem();

};

