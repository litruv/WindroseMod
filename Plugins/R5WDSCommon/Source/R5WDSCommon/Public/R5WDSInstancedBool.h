#pragma once
#include "CoreMinimal.h"
#include "R5WDSInstancedParameter.h"
#include "R5WDSInstancedBool.generated.h"

class UR5WDSBoolParams;

UCLASS(Blueprintable, EditInlineNew)
class R5WDSCOMMON_API UR5WDSInstancedBool : public UR5WDSInstancedParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WDSBoolParams* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UR5WDSInstancedBool();

};

