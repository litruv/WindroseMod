#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5SpawnAnchor.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5SpawnAnchor : public AActor {
    GENERATED_BODY()
public:
    AR5SpawnAnchor(const FObjectInitializer& ObjectInitializer);

};

