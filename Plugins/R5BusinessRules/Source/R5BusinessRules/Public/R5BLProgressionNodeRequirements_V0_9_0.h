#pragma once
#include "CoreMinimal.h"
#include "ER5BLNodeRequirementsSearchPolicy_V0_9_0.h"
#include "R5BLProgressionPointsRequirement_V0_9_0.h"
#include "R5BLProgressionNodeRequirements_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionNodeRequirements_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLProgressionPointsRequirement_V0_9_0> RequiredPointsByNodeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLNodeRequirementsSearchPolicy_V0_9_0 SearchPolicy;
    
    FR5BLProgressionNodeRequirements_V0_9_0();
};

