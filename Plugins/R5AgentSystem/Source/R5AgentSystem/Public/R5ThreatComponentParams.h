#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ThreatComponentData.h"
#include "R5ThreatComponentParams.generated.h"

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5ThreatComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ThreatComponentData ThreatData;
    
    UR5ThreatComponentParams();

};

