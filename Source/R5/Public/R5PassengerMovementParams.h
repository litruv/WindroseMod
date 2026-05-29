#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5CharacterBasedMovementData.h"
#include "R5CharacterPrecisionData.h"
#include "R5PassengerMovementParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5PassengerMovementParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CharacterPrecisionData DefaultPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CharacterBasedMovementData CharacterBasedMovement;
    
    UR5PassengerMovementParams();

};

