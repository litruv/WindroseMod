#pragma once
#include "CoreMinimal.h"
#include "R5RopeAttachmentPoint.h"
#include "R5RopeData.generated.h"

USTRUCT(BlueprintType)
struct FR5RopeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RopeAttachmentPoint FirstAttachmentPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RopeAttachmentPoint SecondAttachmentPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Slackness;
    
    R5_API FR5RopeData();
};

