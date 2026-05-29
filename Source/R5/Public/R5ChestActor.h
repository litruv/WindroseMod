#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemInterface -FallbackName=R5DropItemInterface
#include "R5DropItemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
#include "R5BlActorInterface.h"
#include "R5ChestActor.generated.h"

class UAudioComponent;
class UNiagaraComponent;
class UR5BLActorView;
class UR5BLDefaultInventoryItemsParams;
class UR5BLInventoryParams;
class UR5BLIslandChestView;
class UR5BLPlayerView;
class UR5ChestFXParams;
class UR5CommonInteractionTargetComponent;
class UR5DropItemsComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport, Config=Engine)
class R5_API AR5ChestActor : public AR5InstantiableActor, public IR5InventoryInterface, public IR5DropItemInterface, public IR5BlActorInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryParams> InventoryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLDefaultInventoryItemsParams> OptionalDefaultInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DropItemsComponent* DropItemsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ChestFXParams* ChestFXParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLIslandChestView* ChestView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLActorView* ActorView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedChestVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SpawnedChestSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerView* LocalPlayerView;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetCullDistance;
    
public:
    AR5ChestActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

