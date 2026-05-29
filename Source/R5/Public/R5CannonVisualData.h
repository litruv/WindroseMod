#pragma once
#include "CoreMinimal.h"
#include "R5CannonVisualData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5CannonVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> BarrelMesh;
    
    R5_API FR5CannonVisualData();
};

