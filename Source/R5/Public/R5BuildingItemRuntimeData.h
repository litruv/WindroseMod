#pragma once
#include "CoreMinimal.h"
#include "R5BuildingItemRuntimeData.generated.h"

class IR5BuildingItemInterface;
class UR5BuildingItemInterface;

USTRUCT(BlueprintType)
struct FR5BuildingItemRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BuildingItemInterface> ItemInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
    R5_API FR5BuildingItemRuntimeData();
};

