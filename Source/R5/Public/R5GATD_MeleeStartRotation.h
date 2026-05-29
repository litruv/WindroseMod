#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionRotateToCameraData -FallbackName=RootMotionRotateToCameraData
#include "RootMotionRotateToCameraData.h"
#include "R5GATD_MeleeStartRotation.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GATD_MeleeStartRotation : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionRotateToCameraData RotationData;
    
    FR5GATD_MeleeStartRotation();
};

