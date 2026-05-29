#pragma once
#include "CoreMinimal.h"
#include "R5RopeAttachmentPoint.generated.h"

USTRUCT(BlueprintType)
struct FR5RopeAttachmentPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachMeshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    R5_API FR5RopeAttachmentPoint();
};

