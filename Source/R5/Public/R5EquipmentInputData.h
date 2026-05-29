#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentInputData.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FR5EquipmentInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* AdditionalIMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityIMC;
    
    R5_API FR5EquipmentInputData();
};

