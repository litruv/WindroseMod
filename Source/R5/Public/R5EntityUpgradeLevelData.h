#pragma once
#include "CoreMinimal.h"
#include "R5NiagaraFXData.h"
#include "R5EntityUpgradeLevelData.generated.h"

class UR5BLRecipeData;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5EntityUpgradeLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> MeshesToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NiagaraFXData> CompleteLevelFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeData> RecipeToUpgrade;
    
    R5_API FR5EntityUpgradeLevelData();
};

