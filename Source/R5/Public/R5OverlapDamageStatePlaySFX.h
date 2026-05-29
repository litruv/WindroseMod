#pragma once
#include "CoreMinimal.h"
#include "R5NewOverlapDamageComponentSFXData.h"
#include "R5OverlapDamageStateStrategy.h"
#include "R5OverlapDamageStatePlaySFX.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStatePlaySFX : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NewOverlapDamageComponentSFXData> SFXData;
    
public:
    UR5OverlapDamageStatePlaySFX();

};

