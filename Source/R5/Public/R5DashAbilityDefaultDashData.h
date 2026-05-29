#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionConstantForceData -FallbackName=RootMotionConstantForceData
#include "RootMotionConstantForceData.h"
#include "R5DashAbilityOverrideData.h"
#include "R5DashAbilityDefaultDashData.generated.h"

USTRUCT(BlueprintType)
struct FR5DashAbilityDefaultDashData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDashBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimMontageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionConstantForceData RootMotionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DashAbilityOverrideData> OverrideData;
    
    R5_API FR5DashAbilityDefaultDashData();
};

