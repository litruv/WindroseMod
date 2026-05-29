#pragma once
#include "CoreMinimal.h"
#include "R5BLItemAttributeModifierData_V0_9_0.h"
#include "R5BLItemAttributeModifiersData_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemAttributeModifiersData_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemAttributeModifierData_V0_9_0> ItemAttributeModifiers;
    
    FR5BLItemAttributeModifiersData_V0_9_0();
};

