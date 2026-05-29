#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
#include "R5TerraformProcessor.h"
#include "R5TerraformProcessor_ItemCost.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5TerraformProcessor_ItemCost : public UR5TerraformProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemsStackData ItemCost;
    
    UR5TerraformProcessor_ItemCost();

};

