#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AmmoComponentData.h"
#include "R5AmmoComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AmmoComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AmmoComponentData Data;
    
    UR5AmmoComponentParams();

};

