#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "MercunaNavSeed.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AMercunaNavSeed : public AActor {
    GENERATED_BODY()
public:
    AMercunaNavSeed(const FObjectInitializer& ObjectInitializer);

};

