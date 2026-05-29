#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "Net/Serialization/FastArraySerializer.h"
#include "R5SegmentTreePart.h"
#include "R5SegmentTreeSpec.generated.h"

USTRUCT(BlueprintType)
struct FR5SegmentTreeSpec : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5SegmentTreePart> ModifiedSegments;
    
    R5_API FR5SegmentTreeSpec();
};

