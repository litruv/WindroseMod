#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "R5AIDataToDependentEntitiesCount.generated.h"

class UR5AIPawnParams;
class UR5AbilitySystemParams;
class UR5BLLootParams;

USTRUCT(BlueprintType)
struct R5_API FR5AIDataToDependentEntitiesCount {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval CountEntities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIPawnParams* AIPawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> LootParams;
    
    FR5AIDataToDependentEntitiesCount();
};

