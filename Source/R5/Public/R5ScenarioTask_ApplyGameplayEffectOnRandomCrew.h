#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioTask_CrewTask.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTask_ApplyGameplayEffectOnRandomCrew.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_ApplyGameplayEffectOnRandomCrew : public UR5ScenarioTask_CrewTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UR5ScenarioTask_ApplyGameplayEffectOnRandomCrew();

};

