#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Net -ObjectName=R5NetCm_WorldDescriptionV1 -FallbackName=R5NetCm_WorldDescriptionV1
#include "R5NetCm_WorldDescriptionV1.h"
#include "R5CoopWorldDescription.generated.h"

USTRUCT(BlueprintType)
struct FR5CoopWorldDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NetCm_WorldDescriptionV1 WorldDescription;
    
    R5COOPPROXY_API FR5CoopWorldDescription();
};

