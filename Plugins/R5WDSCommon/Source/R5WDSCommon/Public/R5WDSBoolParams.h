#pragma once
#include "CoreMinimal.h"
#include "R5WDSParameterParams.h"
#include "R5WDSBoolParams.generated.h"

UCLASS(Blueprintable)
class R5WDSCOMMON_API UR5WDSBoolParams : public UR5WDSParameterParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
    UR5WDSBoolParams();

};

