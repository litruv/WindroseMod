#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5BLItemsCreatorGPPData.h"
#include "R5BLItemsCreatorUIData.h"
#include "R5BLRecipeListContainer.h"
#include "R5BLItemsCreatorParams.generated.h"

class UR5BLProductionReputationParams;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLItemsCreatorParams : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipeListContainer> RecipesLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockedByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLProductionReputationParams> ProductionReputationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemsCreatorUIData UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemsCreatorGPPData GPPData;
    
    UR5BLItemsCreatorParams();

};

