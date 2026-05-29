#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "R5ConsumeAbilityTagData.h"
#include "R5CommonConsumeAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5INVENTORY_API UR5CommonConsumeAbilityParams : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ConsumeAbilityTagData TagData;
    
    UR5CommonConsumeAbilityParams();

};

