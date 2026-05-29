#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5AssetPathProvider -FallbackName=R5AssetPathProvider
#include "R5AssetPathProvider.h"
#include "R5CustomizationMeshData.h"
#include "R5ShipHullCustomPrimitiveData.h"
#include "R5ShipItemParams.h"
#include "R5ShipHullItemParams.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipHullItemParams : public UR5ShipItemParams, public IR5AssetPathProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipHullCustomPrimitiveData> CustomPrimitiveDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> MainCustomizationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CustomizationMeshData> MeshDataArray;
    
    UR5ShipHullItemParams();


    // Fix for true pure virtual functions not being implemented
};

