#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5UnstuckData.h"
#include "R5UnstuckParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5UnstuckParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UnstuckData UnstuckData;
    
    UR5UnstuckParams();

};

