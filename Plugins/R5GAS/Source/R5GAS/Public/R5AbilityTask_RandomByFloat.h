#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ScalableFloat -FallbackName=ScalableFloat
#include "ScalableFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AbilityTask_RandomBase.h"
#include "R5AbilityTask_RandomByFloat.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_RandomByFloat : public UR5AbilityTask_RandomBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxRandomToSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SuccessTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FailTag;
    
    UR5AbilityTask_RandomByFloat();

};

