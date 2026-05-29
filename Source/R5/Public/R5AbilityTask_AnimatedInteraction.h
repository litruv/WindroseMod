#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_AnimatedInteractionData.h"
#include "R5AbilityTask_AnimatedInteraction.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UR5AbilityTask_AnimatedInteraction : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5AbilityTask_AnimatedInteractionData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> IgnoredComponents;
    
public:
    UR5AbilityTask_AnimatedInteraction();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

