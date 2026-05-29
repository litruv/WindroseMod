#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ApplyActionWithRandomActionData.h"
#include "Templates/SubclassOf.h"
#include "R5ApplyActionWithRandomParams.generated.h"

class UR5AbilityTask_RandomBase;

UCLASS(Blueprintable)
class R5GAS_API UR5ApplyActionWithRandomParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5AbilityTask_RandomBase> RandomTaskClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5ApplyActionWithRandomActionData> RandomResultToActions;
    
    UR5ApplyActionWithRandomParams();

};

