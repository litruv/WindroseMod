#pragma once
#include "CoreMinimal.h"
#include "ER5EncounterRequirementCompositionType.h"
#include "R5EncounterRequirement.h"
#include "R5EncounterRequirement_Composition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_Composition : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5EncounterRequirementCompositionType CompositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5EncounterRequirement*> Requirements;
    
public:
    UR5EncounterRequirement_Composition();

};

