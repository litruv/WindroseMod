#pragma once
#include "CoreMinimal.h"
#include "R5ChanceStruct.h"
#include "R5ActorClassChanceStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FR5ActorClassChanceStruct : public FR5ChanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SpawnActorClass;
    
    R5_API FR5ActorClassChanceStruct();
};

