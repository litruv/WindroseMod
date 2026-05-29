#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_PlayerRevived.generated.h"

class AR5PlayerCharacter;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_PlayerRevived : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5PlayerCharacter* PlayerCharacter;
    
public:
    UR5ScenarioListener_PlayerRevived();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRevived(AR5PlayerCharacter* InPlayerCharacter);
    
};

