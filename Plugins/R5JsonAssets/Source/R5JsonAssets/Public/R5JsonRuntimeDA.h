#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5JsonRuntimeDA.generated.h"

UCLASS(Blueprintable, Transient)
class R5JSONASSETS_API UR5JsonRuntimeDA : public UDataAsset {
    GENERATED_BODY()
public:
    UR5JsonRuntimeDA();

};

