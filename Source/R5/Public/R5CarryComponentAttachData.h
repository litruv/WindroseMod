#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5CarryComponentAttachData.generated.h"

USTRUCT(BlueprintType)
struct FR5CarryComponentAttachData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CosmeticAttachBoneName;
    
    R5_API FR5CarryComponentAttachData();
};

