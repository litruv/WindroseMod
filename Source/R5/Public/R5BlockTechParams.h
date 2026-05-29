#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BlockGEData.h"
#include "R5BlockTagData.h"
#include "R5BlockTechData.h"
#include "R5BlockTechParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BlockTechParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockTagData TagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockGEData GEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockTechData TechData;
    
    UR5BlockTechParams();

};

