#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Net -ObjectName=ER5CmNet_WorldPresetType -FallbackName=ER5CmNet_WorldPresetType
#include "ER5CmNet_WorldPresetType.h"
#include "R5WDSPresetParams.generated.h"

class UMaterialInterface;
class UR5WDSInstancedParameter;
class UTexture2D;

UCLASS(Blueprintable)
class R5WDSCOMMON_API UR5WDSPresetParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Illustration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CmNet_WorldPresetType PresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5WDSInstancedParameter*> ParameterDefaults;
    
    UR5WDSPresetParams();

};

