#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NewOverlapDamageComponentData.h"
#include "R5NewOverlapDamageComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5NewOverlapDamageComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NewOverlapDamageComponentData Data;
    
    UR5NewOverlapDamageComponentParams();

};

