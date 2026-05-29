#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "R5ObjectInspector_AssetSoftPath.h"
#include "R5ObjectInspectorAssetData.generated.h"

USTRUCT(BlueprintType)
struct FR5ObjectInspectorAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 ClassIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 ImplementedInterfacesBitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstantiableActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWithScenario: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuitableForLevelGeneration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuitableForISMing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStaticMeshesComposition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldBeActiveOnHalfChunkActivity: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 NetworkSpawnMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ObjectInspector_AssetSoftPath DummyTree_LogicSegmentClass;
    
    R5_API FR5ObjectInspectorAssetData();
};

