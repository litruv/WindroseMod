#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ER5BlockSurfaceMaterialType.h"
#include "R5BlockEffectParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BlockEffectParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BlockSurfaceMaterialType BlockSurfaceType;
    
    UR5BlockEffectParams();

};

