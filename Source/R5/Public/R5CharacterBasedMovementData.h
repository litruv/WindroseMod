#pragma once
#include "CoreMinimal.h"
#include "R5CharacterBasedMovementData.generated.h"

USTRUCT(BlueprintType)
struct FR5CharacterBasedMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBasedMovementIgnorePhysicsBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBaseOnAttachmentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayBasedInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StayBasedInAirHeight;
    
    R5_API FR5CharacterBasedMovementData();
};

