#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5RadialSlotData.h"
#include "R5RadialMenuAsset.generated.h"

UCLASS(Blueprintable)
class R5_API UR5RadialMenuAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RadialSlotData> SlotsData;
    
    UR5RadialMenuAsset();

};

