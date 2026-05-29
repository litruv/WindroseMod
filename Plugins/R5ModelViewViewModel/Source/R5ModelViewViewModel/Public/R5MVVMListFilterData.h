#pragma once
#include "CoreMinimal.h"
#include "R5MVVMListFilterData.generated.h"

class UR5MVVMListFilter_Base;

USTRUCT(BlueprintType)
struct FR5MVVMListFilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMListFilter_Base*> Filters;
    
    R5MODELVIEWVIEWMODEL_API FR5MVVMListFilterData();
};

