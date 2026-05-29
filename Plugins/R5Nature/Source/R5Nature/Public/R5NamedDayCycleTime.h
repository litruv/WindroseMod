#pragma once
#include "CoreMinimal.h"
#include "R5NamedDayCycleTime.generated.h"

USTRUCT(BlueprintType)
struct R5NATURE_API FR5NamedDayCycleTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FR5NamedDayCycleTime();
};
FORCEINLINE uint32 GetTypeHash(const FR5NamedDayCycleTime& Key)
{
    return GetTypeHash(Key.Name);
}

