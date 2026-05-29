#pragma once
#include "CoreMinimal.h"
#include "ELayoutLayer.h"
#include "HFSMStateComponent.h"
#include "LayoutTemplatesSorter.generated.h"

class UUILayoutTemplate;

UCLASS(Blueprintable, EditInlineNew)
class GCFSM_API ULayoutTemplatesSorter : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5SorterUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SorterUpdated OnSorterUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUILayoutTemplate*> TemplatesList;
    
public:
    ULayoutTemplatesSorter();

    UFUNCTION(BlueprintCallable)
    void SetLayoutsVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUILayoutTemplate*> GetLayouts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUILayoutTemplate* GetLayer(ELayoutLayer Layer);
    
};

