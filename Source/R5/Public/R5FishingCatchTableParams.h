#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5FishingCatchTableData.h"
#include "R5FishingCatchTableParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5FishingCatchTableParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5FishingCatchTableData> WeightTable;
    
    UR5FishingCatchTableParams();

};

