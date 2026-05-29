#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5GamepadCursor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5GamepadCursor : public UUserWidget {
    GENERATED_BODY()
public:
    UR5GamepadCursor();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewportResized(float DPIScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusFound(bool HasFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetFocusWidgetGeometry() const;
    
};

