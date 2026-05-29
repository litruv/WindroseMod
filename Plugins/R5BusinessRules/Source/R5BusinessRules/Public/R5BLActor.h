#pragma once
#include "CoreMinimal.h"
#include "R5BLActorData.h"
#include "R5BLActor.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLActorData ActorData;
    
    FR5BLActor();
};

