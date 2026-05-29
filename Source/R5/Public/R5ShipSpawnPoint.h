#pragma once
#include "CoreMinimal.h"
#include "R5SpawnPoint.h"
#include "R5ShipSpawnPoint.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NoExport)
class AR5ShipSpawnPoint : public AR5SpawnPoint {
    GENERATED_BODY()
public:
    AR5ShipSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

