#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "R5JsonRuntimePDA.generated.h"

UCLASS(Blueprintable, Transient)
class R5JSONASSETS_API UR5JsonRuntimePDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UR5JsonRuntimePDA();

};

