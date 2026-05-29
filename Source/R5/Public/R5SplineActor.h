#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5SplineActor.generated.h"

class USplineComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5SplineActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    AR5SplineActor(const FObjectInitializer& ObjectInitializer);

};

