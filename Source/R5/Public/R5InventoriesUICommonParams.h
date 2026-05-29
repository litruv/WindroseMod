#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMDataAsset -FallbackName=R5MVVMDataAsset
#include "R5MVVMDataAsset.h"
#include "R5InventorySlotStatusEffectsData.h"
#include "R5InventoriesUICommonParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5InventoriesUICommonParams : public UR5MVVMDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5InventorySlotStatusEffectsData CooldownData;
    
    UR5InventoriesUICommonParams();

};

