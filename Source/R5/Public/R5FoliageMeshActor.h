#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5FoliageMeshActor.generated.h"

class UR5FoliageMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5FoliageMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FoliageMeshComponent* FoliageMeshComponent;
    
    AR5FoliageMeshActor(const FObjectInitializer& ObjectInitializer);

};

