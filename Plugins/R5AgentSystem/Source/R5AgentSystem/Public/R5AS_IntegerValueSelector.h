#pragma once
#include "CoreMinimal.h"
#include "ER5AS_ValueSelectorPlace.h"
#include "R5AS_ValueSelectorCommon.h"
#include "R5AS_IntegerValueSelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_IntegerValueSelector : public FR5AS_ValueSelectorCommon {
    GENERATED_BODY()
public:
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AS_ValueSelectorPlace Place;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    FR5AS_IntegerValueSelector();
};

