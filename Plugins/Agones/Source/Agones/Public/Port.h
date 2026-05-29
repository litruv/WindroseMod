#pragma once
#include "CoreMinimal.h"
#include "Port.generated.h"

USTRUCT(BlueprintType)
struct FPort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    AGONES_API FPort();
};

