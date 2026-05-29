#pragma once
#include "CoreMinimal.h"
#include "R5BLDAItemTypeData.generated.h"

class UR5BLItemTypeBehaviorParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLDAItemTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLItemTypeBehaviorParams> Type;
    
    FR5BLDAItemTypeData();
};

