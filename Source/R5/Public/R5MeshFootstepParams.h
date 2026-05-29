#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5MeshFootstepData.h"
#include "R5MeshFootstepParams.generated.h"

UCLASS(Blueprintable)
class UR5MeshFootstepParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeshFootstepData Data;
    
    UR5MeshFootstepParams();

};

