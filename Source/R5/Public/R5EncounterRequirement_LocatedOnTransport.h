#pragma once
#include "CoreMinimal.h"
#include "R5EncounterRequirement.h"
#include "R5EncounterRequirement_LocatedOnTransport.generated.h"

class AActor;
class UR5EncounterRequirement_Timer;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_LocatedOnTransport : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5EncounterRequirement_Timer* Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> TransportClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPawnCanBeTransport;
    
public:
    UR5EncounterRequirement_LocatedOnTransport();

};

