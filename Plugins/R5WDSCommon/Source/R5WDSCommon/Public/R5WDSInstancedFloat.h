#pragma once
#include "CoreMinimal.h"
#include "R5WDSInstancedParameter.h"
#include "R5WDSInstancedFloat.generated.h"

class UR5WDSFloatParams;

UCLASS(Blueprintable, EditInlineNew)
class R5WDSCOMMON_API UR5WDSInstancedFloat : public UR5WDSInstancedParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WDSFloatParams* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UR5WDSInstancedFloat();

};

