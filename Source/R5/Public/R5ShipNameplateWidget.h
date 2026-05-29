#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5ShipNameplateWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5ShipNameplateWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UR5ShipNameplateWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetText(const FText& Value);
    
};

