#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_OnPawnReceivedDamage.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_OnPawnReceivedDamage : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDamageValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfinite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Damager;
    
public:
    UR5ScenarioListener_OnPawnReceivedDamage();

};

