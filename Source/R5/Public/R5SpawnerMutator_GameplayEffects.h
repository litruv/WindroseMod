#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5GameplayEffectWithPredefinedMagnitudesSoftRef -FallbackName=R5GameplayEffectWithPredefinedMagnitudesSoftRef
#include "R5GameplayEffectWithPredefinedMagnitudesSoftRef.h"
#include "R5SpawnerMutator.h"
#include "R5SpawnerMutator_GameplayEffects.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerMutator_GameplayEffects : public UR5SpawnerMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayEffectWithPredefinedMagnitudesSoftRef> GameplayEffects;
    
    UR5SpawnerMutator_GameplayEffects();

};

