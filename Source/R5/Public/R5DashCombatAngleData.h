#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Float -FallbackName=Optional_Float
#include "Optional_Float.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionConstantForceData -FallbackName=RootMotionConstantForceData
#include "RootMotionConstantForceData.h"
#include "R5DashAbilityOverrideData.h"
#include "R5DashCombatAngleData.generated.h"

USTRUCT(BlueprintType)
struct FR5DashCombatAngleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptional_Float OverrideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionConstantForceData RootMotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DashAbilityOverrideData> OverrideData;
    
    R5_API FR5DashCombatAngleData();
};

