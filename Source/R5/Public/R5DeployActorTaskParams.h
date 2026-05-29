#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DeployActorTaskData.h"
#include "R5DeployActorTaskParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DeployActorTaskParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DeployActorTaskData Data;
    
    UR5DeployActorTaskParams();

};

