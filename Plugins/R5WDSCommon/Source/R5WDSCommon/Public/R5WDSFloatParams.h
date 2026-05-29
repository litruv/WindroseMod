#pragma once
#include "CoreMinimal.h"
#include "ER5WDSFloatView.h"
#include "R5WDSParameterParams.h"
#include "R5WDSFloatParams.generated.h"

UCLASS(Blueprintable)
class R5WDSCOMMON_API UR5WDSFloatParams : public UR5WDSParameterParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5WDSFloatView View;
    
    UR5WDSFloatParams();

};

