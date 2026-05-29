#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Net -ObjectName=R5NetCm_ServerDescription_PersistentV2 -FallbackName=R5NetCm_ServerDescription_PersistentV2
#include "R5NetCm_ServerDescription_PersistentV2.h"
#include "R5CoopServerDescription.generated.h"

USTRUCT(BlueprintType)
struct FR5CoopServerDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeploymentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NetCm_ServerDescription_PersistentV2 ServerDescription_Persistent;
    
    R5COOPPROXY_API FR5CoopServerDescription();
};

