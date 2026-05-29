#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5PostureDamageGEData.h"
#include "R5PostureDamageGEParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PostureDamageGEParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PostureDamageGEData Data;
    
    UR5PostureDamageGEParams();

};

