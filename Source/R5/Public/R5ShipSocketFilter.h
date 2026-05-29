#pragma once
#include "CoreMinimal.h"
#include "R5ShipSocketFilter.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipSocketFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SocketNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SocketTags;
    
    R5_API FR5ShipSocketFilter();
};

