#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5InventoryQuestRarityParams.generated.h"

class UR5BLInventoryItem;
class UR5BLQuestParams;

UCLASS(Blueprintable)
class R5_API UR5InventoryQuestRarityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UR5BLInventoryItem>, TSoftObjectPtr<UR5BLQuestParams>> QuestRarities;
    
    UR5InventoryQuestRarityParams();

};

