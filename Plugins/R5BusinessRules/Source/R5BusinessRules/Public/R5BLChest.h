#pragma once
#include "CoreMinimal.h"
#include "R5BLDropInventory.h"
#include "R5BLInventory.h"
#include "R5BLChest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLChest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ChestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLInventory Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLDropInventory DropInventory;
    
    FR5BLChest();
};

