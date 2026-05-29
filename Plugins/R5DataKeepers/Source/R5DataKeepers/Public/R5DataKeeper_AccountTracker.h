#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5DataKeeper_AccountTracker.generated.h"

class UR5DkAccountTracker_TrackedItem;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeper_AccountTracker : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5DkAccountTracker_TrackedItem*> TrackedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5DkAccountTracker_TrackedItem*> ProcessedItems;
    
public:
    UR5DataKeeper_AccountTracker();

};

