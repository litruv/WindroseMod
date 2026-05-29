#pragma once
#include "CoreMinimal.h"
#include "R5STC_CompareAngleInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_CompareAngleInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    FR5STC_CompareAngleInstanceData();
};

