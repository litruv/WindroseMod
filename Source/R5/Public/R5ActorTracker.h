#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5ActorTracker.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5ActorTracker : public AActor {
    GENERATED_BODY()
public:
    AR5ActorTracker(const FObjectInitializer& ObjectInitializer);

};

