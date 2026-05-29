#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueNotify_Actor -FallbackName=GameplayCueNotify_Actor
#include "GameplayCueNotify_Actor.h"
#include "R5GameplayCue_CatchBobber.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5GameplayCue_CatchBobber : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BobberAttachSocket;
    
public:
    AR5GameplayCue_CatchBobber(const FObjectInitializer& ObjectInitializer);

};

