#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5MVVMView.generated.h"

class UR5MVVMViewModel;

UCLASS(Blueprintable, EditInlineNew)
class R5MODELVIEWVIEWMODEL_API UR5MVVMView : public UUserWidget {
    GENERATED_BODY()
public:
    UR5MVVMView();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void SetViewModel(UR5MVVMViewModel* InViewModel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnViewModelUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInternalViewModelUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsViewActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5MVVMViewModel* GetViewModel() const;
    
};

