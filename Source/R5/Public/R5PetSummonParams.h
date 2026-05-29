#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5PetSummonGPData.h"
#include "R5PetSummonMobData.h"
#include "R5PetSummonTechData.h"
#include "R5PetSummonParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PetSummonParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PetSummonMobData PetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PetSummonGPData GPData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PetSummonTechData TechData;
    
    UR5PetSummonParams();

};

