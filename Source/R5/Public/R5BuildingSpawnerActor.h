#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5BuildingSpawnerActor.generated.h"

class UR5BuildingSpawnerComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingSpawnerActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BuildingSpawnerComponent* BuildingSpawner;
    
public:
    AR5BuildingSpawnerActor(const FObjectInitializer& ObjectInitializer);

};

