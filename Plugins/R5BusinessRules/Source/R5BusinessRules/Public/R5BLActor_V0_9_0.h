#pragma once
#include "CoreMinimal.h"
#include "R5BLActorData_V0_9_0.h"
#include "R5BLActor_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLActor_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLActorData_V0_9_0 ActorData;
    
    FR5BLActor_V0_9_0();
};

