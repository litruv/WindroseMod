#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioTask_SpawnSharedPoiChest.h"
#include "R5ScenarioTask_SpawnSharedChestAttached.generated.h"

class AR5ChestActor;
class USceneComponent;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_SpawnSharedChestAttached : public UR5ScenarioTask_SpawnSharedPoiChest {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5ChestActor* SpawnedActor;
    
public:
    UR5ScenarioTask_SpawnSharedChestAttached();

};

