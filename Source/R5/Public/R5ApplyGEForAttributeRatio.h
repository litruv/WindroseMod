#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5ApplyGEForAttributeRatio.generated.h"

class UR5ApplyGEForAttributeRatioParams;

UCLASS(Blueprintable)
class R5_API UR5ApplyGEForAttributeRatio : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ApplyGEForAttributeRatioParams* Params;
    
public:
    UR5ApplyGEForAttributeRatio();

};

