#pragma once
#include "CoreMinimal.h"
#include "R5StabilizerSettings.generated.h"

USTRUCT(BlueprintType)
struct FR5StabilizerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStabilizeXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStabilizeYAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStabilizeZAxis;
    
    R5_API FR5StabilizerSettings();
};

