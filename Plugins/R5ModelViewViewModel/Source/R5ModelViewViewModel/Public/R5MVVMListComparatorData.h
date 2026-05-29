#pragma once
#include "CoreMinimal.h"
#include "R5MVVMListComparatorData.generated.h"

class UR5MVVMListComparator_Base;

USTRUCT(BlueprintType)
struct FR5MVVMListComparatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MVVMListComparator_Base* Comparator;
    
    R5MODELVIEWVIEWMODEL_API FR5MVVMListComparatorData();
};

