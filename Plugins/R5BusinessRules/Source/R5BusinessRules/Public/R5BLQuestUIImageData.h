#pragma once
#include "CoreMinimal.h"
#include "R5BLQuestUIImageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLQuestUIImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    FR5BLQuestUIImageData();
};

