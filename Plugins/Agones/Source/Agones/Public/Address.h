#pragma once
#include "CoreMinimal.h"
#include "Address.generated.h"

USTRUCT(BlueprintType)
struct FAddress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Address;
    
    AGONES_API FAddress();
};

