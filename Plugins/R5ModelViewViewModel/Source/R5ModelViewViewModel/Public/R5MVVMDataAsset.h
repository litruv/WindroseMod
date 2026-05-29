#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5MVVMDataAsset.generated.h"

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UR5MVVMDataAsset();

};

