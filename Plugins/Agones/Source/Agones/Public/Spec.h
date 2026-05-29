#pragma once
#include "CoreMinimal.h"
#include "Health.h"
#include "Spec.generated.h"

USTRUCT(BlueprintType)
struct FSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealth Health;
    
    AGONES_API FSpec();
};

