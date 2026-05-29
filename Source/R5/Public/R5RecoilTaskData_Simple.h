#pragma once
#include "CoreMinimal.h"
#include "R5RecoilAxisData.h"
#include "R5RecoilTaskData_Simple.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5RecoilTaskData_Simple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RecoilAxisData VerticalRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RecoilAxisData HorizontalRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoilApplicationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilApplicationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RecoilCompensationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilCompensationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputInfluenceOnRecoilCompensation;
    
    R5_API FR5RecoilTaskData_Simple();
};

