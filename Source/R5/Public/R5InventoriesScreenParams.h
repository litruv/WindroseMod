#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMDataAsset -FallbackName=R5MVVMDataAsset
#include "R5MVVMDataAsset.h"
#include "R5InventoriesScreenData.h"
#include "R5InventoriesScreenParams.generated.h"

class UR5InventoriesUICommonParams;

UCLASS(Blueprintable)
class R5_API UR5InventoriesScreenParams : public UR5MVVMDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5InventoriesScreenData InventoriesScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InventoriesUICommonParams* InventoryCommonParams;
    
    UR5InventoriesScreenParams();

};

