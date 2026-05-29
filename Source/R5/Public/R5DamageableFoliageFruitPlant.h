#pragma once
#include "CoreMinimal.h"
#include "R5DamageableFoliageActor.h"
#include "R5DamageableFoliageFruitPlant.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5DamageableFoliageFruitPlant : public AR5DamageableFoliageActor {
    GENERATED_BODY()
public:
    AR5DamageableFoliageFruitPlant(const FObjectInitializer& ObjectInitializer);

};

