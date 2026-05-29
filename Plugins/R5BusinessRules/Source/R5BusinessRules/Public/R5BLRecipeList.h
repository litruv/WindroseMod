#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5BLRecipeList.generated.h"

class UR5BLRecipeData;

UCLASS(Blueprintable, NonTransient)
class R5BUSINESSRULES_API UR5BLRecipeList : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLRecipeData>> RecipeList;
    
    UR5BLRecipeList();

};

