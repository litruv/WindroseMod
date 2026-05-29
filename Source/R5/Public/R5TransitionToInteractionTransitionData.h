#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=R5RootMotionMoveToTargetBySpline -FallbackName=R5RootMotionMoveToTargetBySpline
#include "R5RootMotionMoveToTargetBySpline.h"
#include "R5TransitionToInteractionTransitionData.generated.h"

class UR5MoveBySplineCreateParams;

USTRUCT(BlueprintType)
struct FR5TransitionToInteractionTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TransitionType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval HeightDifferenceInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JumpMontageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MoveBySplineCreateParams* SplineCreateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RootMotionMoveToTargetBySpline MoveToTargetBySplineRootMotion;
    
    R5_API FR5TransitionToInteractionTransitionData();
};

