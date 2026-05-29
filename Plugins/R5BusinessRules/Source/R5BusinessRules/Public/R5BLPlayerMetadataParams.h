#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5BLPlayerMetadataParams.generated.h"

class UR5BLEntityProgressionParams;
class UR5BLRecipeList;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLPlayerMetadataParams : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeList> DefaultUnlockedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLEntityProgressionParams> PlayerProgressionParams;
    
    UR5BLPlayerMetadataParams();

};

