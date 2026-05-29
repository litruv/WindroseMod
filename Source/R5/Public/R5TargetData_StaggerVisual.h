#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5StaggerTargetDataPerType.h"
#include "R5TargetData_StaggerVisual.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5TargetData_StaggerVisual : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5StaggerTargetDataPerType> DataPerType;
    
    FR5TargetData_StaggerVisual();
};

