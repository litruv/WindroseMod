#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "WidgetPlaceholder.generated.h"

class UUserWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UWidgetPlaceholder : public UInterface {
    GENERATED_BODY()
};

class IWidgetPlaceholder : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MountWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dispatch(FGameplayTag Event);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DemountWidget(UUserWidget* Widget);
    
};

