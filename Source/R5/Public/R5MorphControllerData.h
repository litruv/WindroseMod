#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterMorphData -FallbackName=R5BLCharacterMorphData
#include "R5BLCharacterMorphData.h"
#include "R5MorphRangeLimitData.h"
#include "R5MorphControllerData.generated.h"

USTRUCT(BlueprintType)
struct FR5MorphControllerData : public FR5BLCharacterMorphData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeMorph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TOptional<FR5MorphRangeLimitData> AllowedRange;
    
    R5_API FR5MorphControllerData();
};

