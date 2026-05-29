#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5AttachingDamageableActorState.h"
#include "R5AttachingDamageableActorLogicData.h"
#include "R5AttachingDamageableActorScaleData.h"
#include "R5AttachingDamageableActorStateData.h"
#include "R5AttachingDamageableActorData.generated.h"

USTRUCT(BlueprintType)
struct FR5AttachingDamageableActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttachingDamageableActorLogicData DefaultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AttachingDamageableActorScaleData> ScaledData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5AttachingDamageableActorState, FR5AttachingDamageableActorStateData> States;
    
    R5_API FR5AttachingDamageableActorData();
};

