#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5STC_ShipCrewState_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_ShipCrewState_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StateTags;
    
    FR5STC_ShipCrewState_InstanceData();
};

