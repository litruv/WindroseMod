#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5WDSParams.generated.h"

class UR5WDSCategoryParams;
class UR5WDSParameterParams;
class UR5WDSPresetParams;

UCLASS(Blueprintable)
class R5WDSCOMMON_API UR5WDSParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5WDSPresetParams*> Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5WDSParameterParams*> ActiveParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5WDSCategoryParams*> UICategories;
    
    UR5WDSParams();

};

