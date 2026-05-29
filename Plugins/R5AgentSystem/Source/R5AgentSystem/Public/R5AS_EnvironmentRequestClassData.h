#pragma once
#include "CoreMinimal.h"
#include "R5AS_EnvironmentRequestClassData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FR5AS_EnvironmentRequestClassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ClassFiler;
    
    R5AGENTSYSTEM_API FR5AS_EnvironmentRequestClassData();
};

