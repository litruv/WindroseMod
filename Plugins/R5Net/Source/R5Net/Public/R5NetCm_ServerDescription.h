#pragma once
#include "CoreMinimal.h"
#include "R5NetCm_ServerDescription_PersistentV2.h"
#include "R5NetCm_ServerDescription_Transient.h"
#include "R5NetCm_WorldDescriptionV1.h"
#include "R5NetCm_ServerDescription.generated.h"

USTRUCT(BlueprintType)
struct R5NET_API FR5NetCm_ServerDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NetCm_ServerDescription_Transient Transient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NetCm_ServerDescription_PersistentV2 Persistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NetCm_WorldDescriptionV1 WorldDescription;
    
    FR5NetCm_ServerDescription();
};

