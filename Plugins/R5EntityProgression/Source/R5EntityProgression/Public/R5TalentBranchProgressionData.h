#pragma once
#include "CoreMinimal.h"
#include "R5TalentLayerProgressionData.h"
#include "R5TalentBranchProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FR5TalentBranchProgressionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5TalentLayerProgressionData> Layers;
    
    R5ENTITYPROGRESSION_API FR5TalentBranchProgressionData();
};

