#pragma once
#include "CoreMinimal.h"
#include "R5AMContextItem.h"
#include "R5AMContextItemsArray.generated.h"

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMContextItemsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AMContextItem> ContextData;
    
    FR5AMContextItemsArray();
};

