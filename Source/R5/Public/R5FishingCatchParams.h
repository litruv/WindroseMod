#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5FishingCatchData.h"
#include "R5FishingCatchParams.generated.h"

class UR5BLLootParams;

UCLASS(Blueprintable)
class R5_API UR5FishingCatchParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5FishingCatchData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> LootParams;
    
    UR5FishingCatchParams();

};

