#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5WDSAttributesData.h"
#include "R5WDSAttributesParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5WDSAttributesParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WDSAttributesData WDSAttributeData;
    
    UR5WDSAttributesParams();

};

