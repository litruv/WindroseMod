#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ColorIndexDataBase.h"
#include "R5CompositeMeshColorGroupData.h"
#include "R5CompositeMeshColorCustomizationParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CompositeMeshColorCustomizationParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CompositeMeshColorGroupData> ColorGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ColorIndexDataBase EyeColor;
    
    UR5CompositeMeshColorCustomizationParams();

};

