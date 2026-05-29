#pragma once
#include "CoreMinimal.h"
#include "R5WidgetPoolData.generated.h"

USTRUCT(BlueprintType)
struct FR5WidgetPoolData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScaleDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPersistentSize;
    
    R5WIDGETPOOL_API FR5WidgetPoolData();
};

