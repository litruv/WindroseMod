#pragma once
#include "CoreMinimal.h"
#include "R5ScenarioComponent.h"
#include "R5ScenarioTagRegistryProvider.h"
#include "R5ScenarioComponent_ForPoi.generated.h"

class UR5ScenarioComponent_ForPoi;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ScenarioComponent_ForPoi : public UR5ScenarioComponent, public IR5ScenarioTagRegistryProvider {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForPoi* LinkedParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5ScenarioComponent_ForPoi*> LinkedChildren;
    
public:
    UR5ScenarioComponent_ForPoi(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

