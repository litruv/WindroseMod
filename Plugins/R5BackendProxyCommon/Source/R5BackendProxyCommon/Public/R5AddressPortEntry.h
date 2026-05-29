#pragma once
#include "CoreMinimal.h"
#include "R5AddressPortEntry.generated.h"

USTRUCT(BlueprintType)
struct FR5AddressPortEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    R5BACKENDPROXYCOMMON_API FR5AddressPortEntry();
};

