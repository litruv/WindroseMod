#pragma once
#include "CoreMinimal.h"
#include "ER5BLNodeRequirementsSearchPolicy.h"
#include "R5BLProgressionPointsRequirement.h"
#include "R5BLProgressionNodeRequirements.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionNodeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLProgressionPointsRequirement> RequiredPointsByNodeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLNodeRequirementsSearchPolicy SearchPolicy;
    
    FR5BLProgressionNodeRequirements();
};

