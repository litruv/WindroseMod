#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5HidePawnMarkerTask.generated.h"

class UGameplayAbility;
class UR5HidePawnMarkerTask;
class UR5MarkerComponent;

UCLASS(Blueprintable)
class R5_API UR5HidePawnMarkerTask : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkerComponent* MarkerComponent;
    
public:
    UR5HidePawnMarkerTask();

    UFUNCTION(BlueprintCallable)
    static UR5HidePawnMarkerTask* HidePawnMarker(UGameplayAbility* OwningAbility, FName TaskInstanceName);
    
};

