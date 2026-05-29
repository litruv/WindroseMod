#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5SlotLimits.h"
#include "R5GameplayEffectSlotParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5GameplayEffectSlotParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNotUniqueSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5SlotLimits> SlotLimits;
    
    UR5GameplayEffectSlotParams();

};

