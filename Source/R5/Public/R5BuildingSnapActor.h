#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5BuildingSnapActor.generated.h"

class UR5BuildingItem;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingSnapActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingItem* BuildingItem;
    
public:
    AR5BuildingSnapActor(const FObjectInitializer& ObjectInitializer);

};

