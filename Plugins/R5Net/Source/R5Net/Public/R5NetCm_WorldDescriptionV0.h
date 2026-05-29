#pragma once
#include "CoreMinimal.h"
#include "R5NetCm_WorldDescriptionV0.generated.h"

USTRUCT(BlueprintType)
struct R5NET_API FR5NetCm_WorldDescriptionV0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Dummy;
    
    FR5NetCm_WorldDescriptionV0();
};

