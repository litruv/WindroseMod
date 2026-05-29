#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsCreatorComfortData.h"
#include "R5BLItemsCreatorUIData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemsCreatorUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemsCreatorComfortData ComfortInfo;
    
    FR5BLItemsCreatorUIData();
};

