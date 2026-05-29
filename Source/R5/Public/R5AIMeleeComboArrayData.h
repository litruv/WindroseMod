#pragma once
#include "CoreMinimal.h"
#include "R5AIMeleeComboData.h"
#include "R5AIMeleeComboArrayData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIMeleeComboArrayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AIMeleeComboData> ArrayCombo;
    
    FR5AIMeleeComboArrayData();
};

