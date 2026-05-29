#pragma once
#include "CoreMinimal.h"
#include "ChoppingSegment.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FChoppingSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChoppingMeshComponent;
    
    R5_API FChoppingSegment();
};

