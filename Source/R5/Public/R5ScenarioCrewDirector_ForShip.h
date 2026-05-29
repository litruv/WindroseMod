#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioCrewDirector.h"
#include "R5ScenarioCrewDirector_ForShip.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ScenarioCrewDirector_ForShip : public UR5ScenarioCrewDirector {
    GENERATED_BODY()
public:
    UR5ScenarioCrewDirector_ForShip(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCaptainChanged(AActor* NewCaptain, AActor* OldCaptain);
    
};

