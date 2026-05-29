#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BuildingItemRuntimeData.h"
#include "R5BuildingUICategory.h"
#include "R5GenericTabData.h"
#include "R5HFSM_BuildingPanel.generated.h"

class APlayerState;
class UR5BLPlayerMetadataView;
class UR5BuildingBrush;
class UR5BuildingGroupWidget;
class UR5BuildingItemWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5HFSM_BuildingPanel : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UR5BuildingGroupWidget> BuildingGroupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UR5BuildingItemWidget> BuildingItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5BuildingUICategory> UICategories;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerMetadataView* MetaDataView;
    
public:
    UR5HFSM_BuildingPanel();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSelectAction(FGameplayTag EventTag, const FR5BuildingItemRuntimeData& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemHoverAction(FGameplayTag EventTag, const FR5BuildingItemRuntimeData& ItemData);
    
    UFUNCTION(BlueprintCallable)
    void MarkItemSeen(const FR5BuildingItemRuntimeData& ItemData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxCountBuildBrush(const UR5BuildingBrush* BuildingBrush, const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5BuildingGroupWidget*> GetBuildingGroupsByCategoryTag(const FGameplayTag& CategoryTag, const UR5BuildingBrush* SelectedBrush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5GenericTabData> CreateTabsData(const UR5BuildingBrush* SelectedBrush) const;
    
};

