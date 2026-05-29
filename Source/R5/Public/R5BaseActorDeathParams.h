#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BaseActorDeathData.h"
#include "R5BaseActorDeathParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BaseActorDeathParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BaseActorDeathData Data;
    
    UR5BaseActorDeathParams();

};

