#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BoardingScenariosParams.generated.h"

class UR5ScenarioSettings;

UCLASS(Blueprintable)
class R5_API UR5BoardingScenariosParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioSettings> VictimScenario;
    
    UR5BoardingScenariosParams();

};

