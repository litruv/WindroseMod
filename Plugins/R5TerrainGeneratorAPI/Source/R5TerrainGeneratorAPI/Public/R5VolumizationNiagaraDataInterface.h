#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterface.h"
#include "R5VolumizationNiagaraDataInterface.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5VolumizationNiagaraDataInterface : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UR5VolumizationNiagaraDataInterface();

};

