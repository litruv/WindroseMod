#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5UseDefaultInstancedTaskGEData.h"
#include "R5UseDefaultInstancedTaskGPData.h"
#include "R5UseDefaultInstancedTaskTagData.h"
#include "R5UseDefaultInstancedTaskParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5UseDefaultInstancedTaskParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UseDefaultInstancedTaskTagData TagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UseDefaultInstancedTaskGEData GEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UseDefaultInstancedTaskGPData GPData;
    
    UR5UseDefaultInstancedTaskParams();

};

