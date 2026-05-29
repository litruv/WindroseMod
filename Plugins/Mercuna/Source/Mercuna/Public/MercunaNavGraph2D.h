#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "EMerGridDebugDrawMode.h"
#include "EMerGridDebugDrawSubmode.h"
#include "MercunaAgentType.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaNavGraph.h"
#include "MercunaSupportedAgentTypes.h"
#include "MercunaNavGraph2D.generated.h"

class AMercunaNavLink;
class UPhysicalMaterial;

UCLASS(Abstract, Blueprintable, NoExport, Config=Engine)
class MERCUNA_API AMercunaNavGraph2D : public AMercunaNavGraph {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhysicalMaterials;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> PhysicalMaterialPriorities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaSupportedAgentTypes SupportedAgentTypes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNavSeeds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnnavigableTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaBuildComplete OnBuildComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaRebuildComplete OnRebuildComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaLoadComplete OnLoadComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph::FMercunaChunkAdded OnChunkAdded;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMerGridDebugDrawMode DebugDrawMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMerGridDebugDrawSubmode DebugDrawSubmode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMercunaAgentType DebugDrawAgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AMercunaNavLink>> NavLinks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NextMaterialId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicalMaterial*, uint32> SurfaceMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavLinkBorder;
    
public:
    AMercunaNavGraph2D(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool HasGeneratedNavMeshInVolumes(const TArray<FBox>& Volumes);
    
};

