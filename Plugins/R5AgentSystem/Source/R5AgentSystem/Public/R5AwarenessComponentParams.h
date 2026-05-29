#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AwarenessComponentData.h"
#include "R5AwarenessComponentParams.generated.h"

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5AwarenessComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AwarenessComponentData Data;
    
    UR5AwarenessComponentParams();

};

