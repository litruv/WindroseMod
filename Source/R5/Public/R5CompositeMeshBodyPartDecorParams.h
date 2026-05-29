#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5CompositeMeshBodyPartDecorParams.generated.h"

class UR5CompositeMeshSelectionDecorData;

UCLASS(Blueprintable)
class R5_API UR5CompositeMeshBodyPartDecorParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5CompositeMeshSelectionDecorData*> BodyPartDecorOptions;
    
    UR5CompositeMeshBodyPartDecorParams();

};

