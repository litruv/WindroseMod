#pragma once
#include "CoreMinimal.h"
#include "R5TaggedVolumeActionBase.h"
#include "Templates/SubclassOf.h"
#include "R5TaggedVolumeAction_ApplyGameplayEffectToSelf.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5TaggedVolumeAction_ApplyGameplayEffectToSelf : public UR5TaggedVolumeActionBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
public:
    UR5TaggedVolumeAction_ApplyGameplayEffectToSelf();

};

