#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5STE_GetArtilleryRangeInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STE_GetArtilleryRangeInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatInterval ArtilleryRange;
    
    FR5STE_GetArtilleryRangeInstanceData();
};

