#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5NetEcSetting.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5NET_API UR5NetEcSetting : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsBetweenSendingEvents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxEventsPerRequest;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MaxEventsPerSession;
    
    UR5NetEcSetting();

};

