#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5PlayAnimMontageData.h"
#include "R5PlayAnimMontageParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5PlayAnimMontageParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PlayAnimMontageData MontageData;
    
    UR5PlayAnimMontageParams();

};

