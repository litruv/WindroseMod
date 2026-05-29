#pragma once
#include "CoreMinimal.h"
#include "R5SpawnPoint.h"
#include "R5AISpawnPoint.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NoExport)
class AR5AISpawnPoint : public AR5SpawnPoint {
    GENERATED_BODY()
public:
    AR5AISpawnPoint(const FObjectInitializer& ObjectInitializer);

};

