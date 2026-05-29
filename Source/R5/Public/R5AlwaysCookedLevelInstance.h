#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "LevelInstance/LevelInstanceActor.h"
#include "R5AlwaysCookedLevelInstance.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5AlwaysCookedLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
    AR5AlwaysCookedLevelInstance();

};

