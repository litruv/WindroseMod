#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5TagEventAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5TagEventAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UR5TagEventAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTagEvent(FGameplayTag Tag);
    
};

