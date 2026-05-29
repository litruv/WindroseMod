#pragma once
#include "CoreMinimal.h"
#include "MerTrianglesDebugData.generated.h"

USTRUCT(BlueprintType)
struct FMerTrianglesDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawTrianglesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOnlyActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MinTrianglesToShow;
    
    MERCUNA_API FMerTrianglesDebugData();
};

