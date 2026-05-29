#pragma once
#include "CoreMinimal.h"
#include "R5ChanceStruct.generated.h"

USTRUCT(BlueprintType)
struct FR5ChanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceModifier;
    
    R5_API FR5ChanceStruct();
};

