#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=EDeadZoneType -FallbackName=EDeadZoneType
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputModifier -FallbackName=InputModifier
#include "InputModifiers.h"
#include "EDeadzoneStick.h"
#include "R5InputModifierDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UR5InputModifierDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeadZoneType Type;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeadzoneStick DeadzoneStick;
    
    UR5InputModifierDeadZone();

};

