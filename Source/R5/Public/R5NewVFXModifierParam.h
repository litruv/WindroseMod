#pragma once
#include "CoreMinimal.h"
#include "R5NewVFXModifierParam.generated.h"

USTRUCT(BlueprintType)
struct FR5NewVFXModifierParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    R5_API FR5NewVFXModifierParam();
};

