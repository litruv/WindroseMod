#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshBodyPartType -FallbackName=ER5BLCompositeMeshBodyPartType
#include "ER5BLCompositeMeshBodyPartType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshSuspendType -FallbackName=ER5BLCompositeMeshSuspendType
#include "ER5BLCompositeMeshSuspendType.h"
#include "CompositeMeshColorData.h"
#include "R5CompositeMeshData.h"
#include "R5SkeletalMeshOptimizationData.h"
#include "R5CompositeMeshParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CompositeMeshParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CompositeMeshData> CompositeMeshesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> AdditionalMorphTargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCompositeMeshBodyPartType, ER5BLCompositeMeshSuspendType> SlotsToSuspend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SkeletalMeshOptimizationData OptimizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompositeMeshColorData ColorData;
    
    UR5CompositeMeshParams();

};

