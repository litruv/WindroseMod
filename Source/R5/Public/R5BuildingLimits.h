#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5BuildingAmountLimit.h"
#include "R5BuildingLimits.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5BuildingLimits : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingAmountLimit> AmountLimits;
    
    UR5BuildingLimits();

};

