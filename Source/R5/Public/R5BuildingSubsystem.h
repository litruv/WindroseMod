#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBlockIdentificationData.h"
#include "R5BuildingSpawnRequest.h"
#include "R5PreSpawnedPoiData.h"
#include "R5WorldSubsystem.h"
#include "R5BuildingSubsystem.generated.h"

class AActor;
class AR5BuildingBlock;
class AR5BuildingBlocksDestroyManager;
class AR5BuildingFXManager;
class UR5BuildingBlockContainer;

UCLASS(Blueprintable)
class R5_API UR5BuildingSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelReplicatingBuildingBlock, const FR5BuildingBlockIdentificationData&, BlockIdentificationData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingAdded, AR5BuildingBlock*, BuildingBlock);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingAdded OnBuildingAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelReplicatingBuildingBlock OnCancelReplicatingBuildingBlock;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5BuildingFXManager* BuildingFXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5BuildingBlocksDestroyManager* BuildingBlocksDestroyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastSearchedPoiForFinishSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UR5BuildingBlockContainer*> BuildingBlockContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BuildingBlock*> ReplicatedBuildingBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingSpawnRequest> PrematureSpawnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FR5PreSpawnedPoiData> PreSpawnedPoiData;
    
public:
    UR5BuildingSubsystem();

};

