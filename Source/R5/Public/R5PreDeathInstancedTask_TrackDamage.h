#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5PreDeathInstancedTask.h"
#include "R5PreDeathInstancedTask_TrackDamage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5PreDeathInstancedTask_TrackDamage : public UR5PreDeathInstancedTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackingDamageTypes;
    
public:
    UR5PreDeathInstancedTask_TrackDamage();

};

