#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UIEvent.h"
#include "UIEventReply.h"
#include "UIEventHandler.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UUIEventHandler : public UInterface {
    GENERATED_BODY()
};

class IUIEventHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUIEventReply HandleEvent(const FUIEvent& Event);
    
};

