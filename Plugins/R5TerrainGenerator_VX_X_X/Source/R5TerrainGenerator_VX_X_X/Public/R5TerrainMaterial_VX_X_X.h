#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5TerrainMaterial_VX_X_X.generated.h"

class ULandscapeGrassType;
class ULandscapeLayerInfoObject;
class UMaterialInstanceConstant;
class UMaterialInterface;

UCLASS(Blueprintable)
class R5TERRAINGENERATOR_VX_X_X_API UR5TerrainMaterial_VX_X_X : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LandscapeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandscapeLayerBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandscapeLayerSample;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandscapeLayerSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> AdditionalLandscapeLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInstanceConstant*> LandscapeMaterialInstanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeGrassType*> LandscapeGrassVarieties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeLayerInfoObject*> LandscapeLayers;
    
    UR5TerrainMaterial_VX_X_X();

};

