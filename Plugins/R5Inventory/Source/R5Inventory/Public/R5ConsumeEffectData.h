#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ConsumeEffect.h"
#include "R5ConsumeEffectData.generated.h"

UCLASS(Blueprintable)
class R5INVENTORY_API UR5ConsumeEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeEffect ConsumeEffect;
    
    UR5ConsumeEffectData();

};

