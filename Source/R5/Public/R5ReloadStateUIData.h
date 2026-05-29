#pragma once
#include "CoreMinimal.h"
#include "R5ReloadStateUIData.generated.h"

USTRUCT(BlueprintType)
struct FR5ReloadStateUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    R5_API FR5ReloadStateUIData();
};

