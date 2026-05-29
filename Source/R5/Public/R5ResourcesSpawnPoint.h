#pragma once
#include "CoreMinimal.h"
#include "R5SpawnPoint.h"
#include "R5ResourcesSpawnPoint.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NoExport)
class AR5ResourcesSpawnPoint : public AR5SpawnPoint {
    GENERATED_BODY()
public:
    AR5ResourcesSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

