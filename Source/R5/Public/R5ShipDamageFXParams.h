#pragma once
#include "CoreMinimal.h"
#include "R5ShipDamageCPD.h"
#include "R5ShipDamageDecalData.h"
#include "R5ShipDamageNiagaraData.h"
#include "R5ShipFXParamsBase.h"
#include "R5ShipDamageFXParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipDamageFXParams : public UR5ShipFXParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipDamageNiagaraData> NiagaraSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipDamageDecalData> DecalSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipDamageCPD> CustomPrimitiveDataArray;
    
    UR5ShipDamageFXParams();

};

