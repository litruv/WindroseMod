#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NiagaraFXData.h"
#include "R5NiagaraSystemData.generated.h"

UCLASS(Blueprintable)
class R5_API UR5NiagaraSystemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NiagaraFXData> NiagaraFXData;
    
    UR5NiagaraSystemData();

};

