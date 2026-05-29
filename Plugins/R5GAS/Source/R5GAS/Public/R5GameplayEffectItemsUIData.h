#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectUIData -FallbackName=GameplayEffectUIData
#include "GameplayEffectUIData.h"
#include "R5GameplayEffectItemsUIData.generated.h"

class UR5BLInventoryItem;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5GameplayEffectItemsUIData : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> Item;
    
    UR5GameplayEffectItemsUIData();

};

