#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5TargetDataPreview.generated.h"

UCLASS(Abstract, Blueprintable, NoExport)
class R5GAS_API AR5TargetDataPreview : public AActor {
    GENERATED_BODY()
public:
    AR5TargetDataPreview(const FObjectInitializer& ObjectInitializer);

};

