#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputModifier -FallbackName=InputModifier
#include "InputModifiers.h"
#include "ER5InputType.h"
#include "R5InputModifier1DAxisAimInversion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UR5InputModifier1DAxisAimInversion : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertByY;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5InputType InputType;
    
public:
    UR5InputModifier1DAxisAimInversion();

};

