#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterface.h"
#include "R5N_WaterNiagaraDataInterface.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5N_WaterNiagaraDataInterface : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UR5N_WaterNiagaraDataInterface();

};

