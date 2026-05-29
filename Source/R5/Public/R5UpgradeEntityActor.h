#pragma once
#include "CoreMinimal.h"
#include "R5CraftStation.h"
#include "R5UpgradeEntityActor.generated.h"

class AActor;
class APlayerState;
class UR5EntityUpgradeComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5UpgradeEntityActor : public AR5CraftStation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5EntityUpgradeComponent* EntityUpgradeComponent;
    
public:
    AR5UpgradeEntityActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnActor(AActor* SpawnedActorDeferred, APlayerState* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUpgrade(int32 NewLevel);
    
};

