#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterface.h"
#include "R5N_NiagaraDataInterfaceCPUTrace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5WEATHER_API UR5N_NiagaraDataInterfaceCPUTrace : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZShiftTraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShiftTraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UR5N_NiagaraDataInterfaceCPUTrace();

};

