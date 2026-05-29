#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5LoadingScreen -ObjectName=R5LoadingScreenWidgetInterface -FallbackName=R5LoadingScreenWidgetInterface
#include "R5LoadingScreenWidgetInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "R5LoadingWidget.generated.h"

class UR5LoadingScreenHints;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5LoadingWidget : public UUserWidget, public IR5LoadingScreenWidgetInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5LoadingScreenHints> LoadingScreenHintsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HintsAnimationDuration;
    
public:
    UR5LoadingWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasUnrealIntroShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatusChanged(const FString& Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReasonChanged(FGameplayTag Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHintChanged(const FText& NewHint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContentChanged(TSubclassOf<UUserWidget> NewWidgetClass);
    

    // Fix for true pure virtual functions not being implemented
};

