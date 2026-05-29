#pragma once
#include "CoreMinimal.h"
#include "UITest.generated.h"

USTRUCT(BlueprintType)
struct R5_API FUITest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IterationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayBeforeCloseMenu;
    
    FUITest();
};

