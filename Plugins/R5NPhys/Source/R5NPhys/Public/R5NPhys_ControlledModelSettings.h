#pragma once
#include "CoreMinimal.h"
#include "R5NPhys_ModelSettings.h"
#include "R5NPhys_ControlledModelSettings.generated.h"

class UR5NPhys_ControlsSimple;

UCLASS(Blueprintable)
class R5NPHYS_API UR5NPhys_ControlledModelSettings : public UR5NPhys_ModelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhys_ControlsSimple* Control;
    
    UR5NPhys_ControlledModelSettings();

};

