#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5MorphControllerData.h"
#include "R5MorphControllerInfo.h"
#include "R5CompositeMeshComponentMorphParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CompositeMeshComponentMorphParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MorphControllerInfo> MorphControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MorphControllerData> MorphControllerParams;
    
    UR5CompositeMeshComponentMorphParams();

};

