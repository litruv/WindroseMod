#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputModifier -FallbackName=InputModifier
#include "InputModifiers.h"
#include "ER5TargetingType.h"
#include "R5InputModifierGamepadSensitivity.generated.h"

class UR5AimSensitivityData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UR5InputModifierGamepadSensitivity : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5TargetingType TargetingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AimSensitivityData* SensitivityLevelTable;
    
    UR5InputModifierGamepadSensitivity();

};

