#pragma once
#include "CoreMinimal.h"
#include "R5NewGEModifierParam.h"
#include "R5NewVFXModifierParam.h"
#include "R5NewOverlapDamageAdditionalParams.generated.h"

USTRUCT(BlueprintType)
struct FR5NewOverlapDamageAdditionalParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NewVFXModifierParam> VFXModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NewGEModifierParam> GEMofifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    R5_API FR5NewOverlapDamageAdditionalParams();
};

