#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5DataKeepers -ObjectName=R5DataKeeper_PlayerState -FallbackName=R5DataKeeper_PlayerState
#include "R5DataKeeper_PlayerState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioInterface -FallbackName=R5ScenarioInterface
#include "R5ScenarioInterface.h"
#include "R5PlayerStateBase.generated.h"

class UR5ScenarioComponent_ForPlayer;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PlayerStateBase : public AR5DataKeeper_PlayerState, public IR5ScenarioInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForPlayer* ScenarioComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OnboardingTag;
    
public:
    AR5PlayerStateBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

