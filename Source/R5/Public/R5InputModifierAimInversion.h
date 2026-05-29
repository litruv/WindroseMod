#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputModifier -FallbackName=InputModifier
#include "InputModifiers.h"
#include "ER5InputType.h"
#include "R5InputModifierAimInversion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UR5InputModifierAimInversion : public UInputModifier {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5InputType InputType;
    
public:
    UR5InputModifierAimInversion();

};

