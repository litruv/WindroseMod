#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBlock_WithScenario.h"
#include "R5PlayerSpawnPointInterface.h"
#include "R5BuildingBlock_Bedroll.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_Bedroll : public AR5BuildingBlock_WithScenario, public IR5PlayerSpawnPointInterface {
    GENERATED_BODY()
public:
    AR5BuildingBlock_Bedroll(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

