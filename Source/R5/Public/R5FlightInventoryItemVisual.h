#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5FlightInventoryItemVisual.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, DefaultConfig, NoExport, Config=Game)
class R5_API AR5FlightInventoryItemVisual : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
public:
    AR5FlightInventoryItemVisual(const FObjectInitializer& ObjectInitializer);

};

