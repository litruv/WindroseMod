#pragma once
#include "CoreMinimal.h"
#include "R5EncounterRequirement_LocatedOnTransport.h"
#include "R5EncounterRequirement_TransportDamaged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_TransportDamaged : public UR5EncounterRequirement_LocatedOnTransport {
    GENERATED_BODY()
public:
    UR5EncounterRequirement_TransportDamaged();

};

