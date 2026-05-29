#pragma once
#include "CoreMinimal.h"
#include "ER5DistanceFilterType.h"
#include "R5EncounterRequirement.h"
#include "R5ActorSpawnerRequirement_Distance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5ActorSpawnerRequirement_Distance : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5DistanceFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UR5ActorSpawnerRequirement_Distance();

};

