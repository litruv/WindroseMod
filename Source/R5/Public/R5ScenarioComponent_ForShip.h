#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioComponent.h"
#include "R5ScenarioComponent_ForShip.generated.h"

class UR5ScenarioComponent_ForShip;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ScenarioComponent_ForShip : public UR5ScenarioComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForShip* LinkedParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5ScenarioComponent_ForShip*> LinkedChildren;
    
public:
    UR5ScenarioComponent_ForShip(const FObjectInitializer& ObjectInitializer);

};

