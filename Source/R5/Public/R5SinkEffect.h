#pragma once
#include "CoreMinimal.h"
#include "R5SinkEffect.generated.h"

class UAudioComponent;
class UObject;

USTRUCT(BlueprintType)
struct FR5SinkEffect {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ActivationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DeactivationSound;
    
public:
    R5_API FR5SinkEffect();
};

