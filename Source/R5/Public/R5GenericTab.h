#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5GenericTabData.h"
#include "R5GenericTab.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5GenericTab : public UUserWidget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GenericTabData CurrentTabData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
public:
    UR5GenericTab();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Repaint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5GenericTabData GetTabData() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ButtonClicked();
    
};

