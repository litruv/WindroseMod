#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioComponent_ForIslandActor_IdType.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioComponent_ForIslandActor_IdType : uint8 {
    BLRecordIdForStaticActor,
    NetGuid,
};

