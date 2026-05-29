#pragma once
#include "CoreMinimal.h"
#include "R5ScalarParamData.h"
#include "R5CPDVectorParam.generated.h"

USTRUCT(BlueprintType)
struct FR5CPDVectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScalarParamData R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScalarParamData G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScalarParamData B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ScalarParamData A;
    
    R5_API FR5CPDVectorParam();
};

