#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5BatteryCameraMovementInputData.h"
#include "R5BatteryCameraMovementParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5BatteryCameraMovementParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BatteryCameraMovementInputData InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePercentageMovement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TurnMovementDeltaPerStep;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PitchMovementDeltaPerStep;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MovementInterpolationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionMovementInterpolationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionDistanceThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionRotationThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionMovementSpeedGrowth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FovInterpolationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MovementSpeedForMaxSpringLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrbitsBlendingStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrbitsBlendPerInputEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AimStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AvailableStatesForEnterToAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AvailableStatesForChangeAiming;
    
    UR5BatteryCameraMovementParams();

};

