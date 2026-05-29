#pragma once
#include "CoreMinimal.h"
#include "R5NPCContainer.generated.h"

class UR5NPCParams;

USTRUCT(BlueprintType)
struct FR5NPCContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5NPCParams>> NPC;
    
    R5_API FR5NPCContainer();
};

