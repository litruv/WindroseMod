#pragma once
#include "CoreMinimal.h"
#include "EMainNotificationPriority.h"
#include "Templates/SubclassOf.h"
#include "R5MainNotificationData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FR5MainNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MainNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMainNotificationPriority> MainNotificationPriority;
    
    R5_API FR5MainNotificationData();
};

