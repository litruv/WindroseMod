#pragma once
#include "CoreMinimal.h"
#include "ER5AS_ValueSelectorPlace.h"
#include "R5AS_ValueSelectorCommon.h"
#include "R5AS_UObjectValueSelector.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_UObjectValueSelector : public FR5AS_ValueSelectorCommon {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AS_ValueSelectorPlace Place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Value;
    
public:
    FR5AS_UObjectValueSelector();
};

