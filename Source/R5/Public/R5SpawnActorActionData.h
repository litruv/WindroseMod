#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "ER5SpawnActorActionType.h"
#include "Templates/SubclassOf.h"
#include "R5SpawnActorActionData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FR5SpawnActorActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SpawnActorActionType SpawnType;
    
    R5_API FR5SpawnActorActionData();
};

