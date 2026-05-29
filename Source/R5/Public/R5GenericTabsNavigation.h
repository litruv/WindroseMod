#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5GenericTabData.h"
#include "R5OnStateChangedDelegate.h"
#include "R5GenericTabsNavigation.generated.h"

class UR5GenericTab;
class USoundBase;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5GenericTabsNavigation : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnStateChanged OnTabStateChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UR5GenericTab> EntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5GenericTab*> TabsWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SwitchSound;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* TabsContainer;
    
public:
    UR5GenericTabsNavigation();

private:
    UFUNCTION(BlueprintCallable)
    void TabStateChanged(const UR5GenericTab* Tab);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Repaint();
    
    UFUNCTION(BlueprintCallable)
    void GoToPreviousTab();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextTab();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveTabIdx() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5GenericTabData GetActiveTabData() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateTabs(const TArray<FR5GenericTabData>& Tabs);
    
};

