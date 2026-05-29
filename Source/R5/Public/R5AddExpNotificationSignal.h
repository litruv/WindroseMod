#pragma once
#include "CoreMinimal.h"
#include "R5AddExpNotificationSignal.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AddExpNotificationSignal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideNotification;
    
    FR5AddExpNotificationSignal();
};

