#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5ShipHullDamageCPDIndex.h"
#include "R5ShipFXParamsBase.h"
#include "R5SinkingShipFX_Settings.h"
#include "SinkingShipCustomPrimitiveData.h"
#include "R5ShipSinkFXParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipSinkFXParams : public UR5ShipFXParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5SinkingShipFX_Settings> SinkingFXSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FireDamageEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5ShipHullDamageCPDIndex, FSinkingShipCustomPrimitiveData> CustomPrimitiveDataMap;
    
    UR5ShipSinkFXParams();

};

