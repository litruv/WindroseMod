#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.h"
#include "R5EquippedAttachmentData.generated.h"

USTRUCT(BlueprintType)
struct FR5EquippedAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel UnhideSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenBySignificance;
    
    R5_API FR5EquippedAttachmentData();
};

