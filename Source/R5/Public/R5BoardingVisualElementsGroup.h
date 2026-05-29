#pragma once
#include "CoreMinimal.h"
#include "R5BoardingVisualBridgeElement.h"
#include "R5BoardingVisualRampElement.h"
#include "R5BoardingVisualElementsGroup.generated.h"

USTRUCT(BlueprintType)
struct FR5BoardingVisualElementsGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BoardingVisualBridgeElement> BridgeElementsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BoardingVisualRampElement> RampElementsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeX;
    
    R5_API FR5BoardingVisualElementsGroup();
};

