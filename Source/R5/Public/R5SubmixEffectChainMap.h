#pragma once
#include "CoreMinimal.h"
#include "R5SubmixEffectChainMap.generated.h"

class USoundEffectSubmixPreset;
class USoundSubmix;

USTRUCT(BlueprintType)
struct R5_API FR5SubmixEffectChainMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundSubmix> Submix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain;
    
    FR5SubmixEffectChainMap();
};

