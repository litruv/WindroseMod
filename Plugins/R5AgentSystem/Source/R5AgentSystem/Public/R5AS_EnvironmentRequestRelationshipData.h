#pragma once
#include "CoreMinimal.h"
#include "R5AS_EnvironmentRequestRelationshipData.generated.h"

USTRUCT(BlueprintType)
struct FR5AS_EnvironmentRequestRelationshipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RelationshipsToTargets;
    
    R5AGENTSYSTEM_API FR5AS_EnvironmentRequestRelationshipData();
};

