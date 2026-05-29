#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "LayoutWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GCFSM_API ULayoutWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeLoverLayers;
    
    ULayoutWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoFadeIn();
    
};

