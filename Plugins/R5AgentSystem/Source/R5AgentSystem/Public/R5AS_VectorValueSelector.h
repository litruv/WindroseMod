#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "ER5AS_ValueSelectorPlace.h"
#include "R5AS_ValueSelectorCommon.h"
#include "R5AS_VectorValueSelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_VectorValueSelector : public FR5AS_ValueSelectorCommon {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AS_ValueSelectorPlace Place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
public:
    FR5AS_VectorValueSelector();
};

