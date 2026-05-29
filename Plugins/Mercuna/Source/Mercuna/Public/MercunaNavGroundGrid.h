#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "EMercunaNavLinkQueryMode.h"
#include "EMercunaProjectionDirection.h"
#include "MercunaAutoNavLink.h"
#include "MercunaAutoNavLinkForUpdate.h"
#include "MercunaGroundAgentType.h"
#include "MercunaNavEdge.h"
#include "MercunaNavGraph2D.h"
#include "MercunaNavInvoker.h"
#include "MercunaNavLinkIdentifier.h"
#include "MercunaNavMeshEdge.h"
#include "MercunaUsageSpec.h"
#include "MercunaUsageTypes.h"
#include "OnMercunaPathUpdatedDelegate.h"
#include "MercunaNavGroundGrid.generated.h"

class AActor;
class AMercunaNavInvokerVolume;
class UMercunaPath;
class UMercunaSmoothPath;
class UObject;

UCLASS(Blueprintable, NoExport, Config=Engine)
class MERCUNA_API AMercunaNavGroundGrid : public AMercunaNavGraph2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutOutStationaryObstacles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateJumpLinks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaterEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreCurbsDuringAutoJumpGeneration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubCellRasterization;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoughSurfacePerchFraction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCellHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellHeightOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavInvokerUpdateFrequency;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMercunaNavInvoker> NavInvokers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMercunaNavInvokerVolume*> NavInvokerVolumes;
    
public:
    AMercunaNavGroundGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAutoGenNavLinks(const TArray<FMercunaAutoNavLinkForUpdate>& LinksToUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterNavInvoker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToObjFile(FMercunaGroundAgentType AgentType, bool bDrawPolyMesh) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterNavInvoker(AActor* Actor, FName AgentType, float GenerationRadius, float RemovalRadius);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolumes(const TArray<FBox>& Volumes, bool bMergeVolumes, bool bOnlyUnbuilt, bool bApplyNavSeeds);
    
    UFUNCTION(BlueprintCallable)
    void RebuildVolume(const AActor* Volume, bool bApplyNavSeeds);
    
    UFUNCTION(BlueprintCallable)
    void RebuildChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Raycast(const FMercunaGroundAgentType& AgentType, const FVector From, const FVector To, bool& bRayHit, FVector& HitPosition, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProjectToNavigable(const FMercunaGroundAgentType& AgentType, FVector position, EMercunaProjectionDirection Direction, bool& bResult, FVector& ProjectedPosition, float SearchHeight, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachableLatent(const FMercunaGroundAgentType& AgentType, FVector From, const TArray<FVector>& To, TArray<bool>& Result, TArray<FVector>& ClampedTo, UObject* WorldContextObject, FLatentActionInfo LatentInfo, float MaxPathLength, float FromSearchRadius, float ToSearchRadius, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsReachable(const FMercunaGroundAgentType& AgentType, const FVector From, const FVector To, float MaxPathLength, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsNavigableMulti(const FMercunaGroundAgentType& AgentType, const TArray<FVector>& Positions, TArray<bool>& Results, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IsNavigable(const FMercunaGroundAgentType& AgentType, const FVector position, bool& bResult, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuiltWithinBox(const FMercunaGroundAgentType& AgentType, const FBox& Box) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuilt(const FMercunaGroundAgentType& AgentType, const FVector& Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyWorkInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetWaterEdges(const FMercunaGroundAgentType& AgentType, FVector position, float MaxPathDistance, TArray<FMercunaNavEdge>& Edges, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumBoxesBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetNavMeshEdges(const FMercunaGroundAgentType& AgentType, const FVector& position, const float MaxRadius, TArray<FMercunaNavMeshEdge>& NavMeshEdges, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestPosOutOfWater(const FMercunaGroundAgentType& AgentType, FVector position, bool& bResult, FVector& ClosestPosition, float MaxPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestPosInWater(const FMercunaGroundAgentType& AgentType, FVector position, bool& bResult, FVector& ClosestPosition, float MaxPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetClosestNavMeshEdge(const FMercunaGroundAgentType& AgentType, const FVector position, bool& bResult, FMercunaNavMeshEdge& ClosestEdge, FVector& ClosestPoint, const float MaxDistance, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume, TArray<FMercunaAutoNavLink>& Results) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateRandomPointsInBox(const FMercunaGroundAgentType& AgentType, const FBox& Volume, int32 NumPoints, TArray<FVector>& Results, const FRotator& Rotator, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GenerateRandomPoints(const FMercunaGroundAgentType& AgentType, const FVector position, float MaxDistance, int32 NumPoints, TArray<FVector>& Results, bool MaxDistanceIsPathDistance, EMercunaNavLinkQueryMode FollowNavLinks, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathToLocations(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, const TArray<FVector>& Destinations, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxSpeedReverse, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaSmoothPath* FindSmoothPathToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, FVector End, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, float MaxSpeedReverse, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToLocations(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, const TArray<FVector>& Destinations, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    UMercunaPath* FindPathToLocation(const FMercunaGroundAgentType& AgentType, const FOnMercunaPathUpdated& OnPathUpdated, FVector Start, FVector StartDir, FVector End, float MinTurnRadius, float IdealTurnRadius, float MaxSpeed, bool AllowPartial, float MaxPathLength, float SlopePenalty, const FMercunaUsageSpec UsageSpec);
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume);
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoGenNavLinksByIdentifier(const TArray<FMercunaNavLinkIdentifier>& Identifiers);
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoGenNavLinksInVolume(const FMercunaGroundAgentType& AgentType, const FBox& Volume);
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoGenNavLinksByIdentifier(const TArray<FMercunaNavLinkIdentifier>& Identifiers);
    
    UFUNCTION(BlueprintCallable)
    void Create();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClampToNavigable(const FMercunaGroundAgentType& AgentType, const FVector position, float SearchRadius, float HeightRange, bool& bResult, FVector& ClampedPosition, FMercunaUsageTypes& ClampedUsageTypes, const FMercunaUsageSpec UsageSpec, bool bIgnoreStationaryObstacles) const;
    
    UFUNCTION(BlueprintCallable)
    void Build(const TArray<FVector>& PriorityPositions);
    
};

