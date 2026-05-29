#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioTask_SpawnPoiChest.h"
#include "R5ScenarioTask_SpawnPersonalPoiChest.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_SpawnPersonalPoiChest : public UR5ScenarioTask_SpawnPoiChest {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FullCollectCounterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PersonalInventoryUniqueId;
    
public:
    UR5ScenarioTask_SpawnPersonalPoiChest();

};

