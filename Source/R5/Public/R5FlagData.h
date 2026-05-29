#pragma once
#include "CoreMinimal.h"
#include "ER5FlagCPDIndex.h"
#include "R5CustomizationMeshData.h"
#include "R5FlagData.generated.h"

USTRUCT(BlueprintType)
struct FR5FlagData : public FR5CustomizationMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5FlagCPDIndex, float> CPDMap;
    
    R5_API FR5FlagData();
};

