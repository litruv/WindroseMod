#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5MaterialPermutationStorage.generated.h"

class ULandscapeGrassType;
class ULandscapeLayerInfoObject;
class UMaterialInstanceConstant;
class UMaterialInterface;

UCLASS(Blueprintable, NoExport)
class R5LANDSCAPERENDERER_API AR5MaterialPermutationStorage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInstanceConstant*> MaterialInstanceConstantMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LandscapeBaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeLayerInfoObject*> LayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeGrassType*> GrassVarieties;
    
    AR5MaterialPermutationStorage(const FObjectInitializer& ObjectInitializer);

};

