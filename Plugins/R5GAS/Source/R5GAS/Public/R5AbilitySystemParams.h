#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AbilitySystemData.h"
#include "R5AbilitySystemParams.generated.h"

class UR5WDSAttributesParams;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilitySystemParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AbilitySystemData AbilitySystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WDSAttributesParams* WDSAttributeParams;
    
    UR5AbilitySystemParams();

};

