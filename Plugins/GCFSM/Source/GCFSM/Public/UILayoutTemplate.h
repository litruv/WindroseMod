#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ELayoutLayer.h"
#include "HFSMStateComponent.h"
#include "Templates/SubclassOf.h"
#include "UIEventHandler.h"
#include "UILayoutTemplate.generated.h"

class ULayoutWidget;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class GCFSM_API UUILayoutTemplate : public UHFSMStateComponent, public IUIEventHandler {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayoutLayer Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULayoutWidget> Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULayoutWidget* TemplateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UWidget*> Placeholders;
    
public:
    UUILayoutTemplate();

    UFUNCTION(BlueprintCallable)
    void SetOpacity(float Opacity);
    
    UFUNCTION(BlueprintCallable)
    void MountWidgetTo(UUserWidget* Widget, FGameplayTag PlaceholderId);
    
    UFUNCTION(BlueprintCallable)
    void DemountWidget(UUserWidget* Widget, FGameplayTag PlaceholderId);
    

    // Fix for true pure virtual functions not being implemented
};

