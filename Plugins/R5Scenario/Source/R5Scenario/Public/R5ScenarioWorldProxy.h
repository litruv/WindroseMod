#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ScenarioWorldProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioWorldProxy : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> BLScenarioRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ScenarioSpawnedActors;
    
public:
    UR5ScenarioWorldProxy();

};

