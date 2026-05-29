#pragma once
#include "CoreMinimal.h"
#include "R5CoopProxyUi_DevMapEntry.generated.h"

USTRUCT(BlueprintType)
struct FR5CoopProxyUi_DevMapEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CommonIslandId;
    
    R5COOPPROXY_API FR5CoopProxyUi_DevMapEntry();
};

