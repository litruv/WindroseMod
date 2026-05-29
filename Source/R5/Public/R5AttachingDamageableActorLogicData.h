#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5AttachingDamageableActorLogicData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5AttachingDamageableActorLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DieGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRestore;
    
    R5_API FR5AttachingDamageableActorLogicData();
};

