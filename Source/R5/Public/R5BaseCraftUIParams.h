#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMDataAsset -FallbackName=R5MVVMDataAsset
#include "R5MVVMDataAsset.h"
#include "R5BaseRecipeListData.h"
#include "R5CraftInventoriesData.h"
#include "R5BaseCraftUIParams.generated.h"

class UR5InventoriesScreenParams;

UCLASS(Blueprintable)
class R5_API UR5BaseCraftUIParams : public UR5MVVMDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseRecipeListData BaseRecipeListData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CraftInventoriesData CraftInventoriesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InventoriesScreenParams* OutputInventoryParams;
    
    UR5BaseCraftUIParams();

};

