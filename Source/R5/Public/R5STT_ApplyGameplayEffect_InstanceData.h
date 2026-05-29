#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5STT_ApplyGameplayEffect_InstanceData.generated.h"

class AActor;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5STT_ApplyGameplayEffect_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    R5_API FR5STT_ApplyGameplayEffect_InstanceData();
};

