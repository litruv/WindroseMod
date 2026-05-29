#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipeBBEntity.h"
#include "R5BLRecipeBBList.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeBBList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipeBBEntity> BlackboardList;
    
    FR5BLRecipeBBList();
};

