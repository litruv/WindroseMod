#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5AssetPathProvider -FallbackName=R5AssetPathProvider
#include "R5AssetPathProvider.h"
#include "ER5BuildingOnLandscapeRule.h"
#include "R5BuildingAssetInterface.h"
#include "R5BuildingBrushComponent.h"
#include "R5BuildingItemDrawData.h"
#include "R5BuildingItemInterface.h"
#include "R5BuildingBrush.generated.h"

class UR5BLRecipeData;
class UR5BuildingBrush;
class UR5BuildingItem;
class UR5Building_SnapPrimitiveBase;
class UTexture2D;

UCLASS(Blueprintable)
class R5_API UR5BuildingBrush : public UObject, public IR5BuildingItemInterface, public IR5BuildingAssetInterface, public IR5AssetPathProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnappingDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FastConstructionDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaterPlaneBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMinUnderwaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUnderwaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMaxUnderwaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUnderwaterDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraPresetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingBrushComponent> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BuildingItemDrawData DrawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BuildingOnLandscapeRule BuildingOnLandscapeRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGraphBuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5Building_SnapPrimitiveBase* SnappingPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerticalNeighboursSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLRecipeData> BuildingCost;
    
    UR5BuildingBrush();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5BuildingBrush* MakeBrushFromItem(UObject* Wco, const UR5BuildingItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlueprintBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BuildingBrushComponent GetSingleBrush() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsVisible() const override PURE_VIRTUAL(IsVisible, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsLockedByRecipe() const override PURE_VIRTUAL(IsLockedByRecipe, return false;);
    
    UFUNCTION(BlueprintCallable)
    UR5BLRecipeData* GetRecipe() const override PURE_VIRTUAL(GetRecipe, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetIcon() const override PURE_VIRTUAL(GetIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UR5BuildingBrush* GetBrush(UObject* Wco) const override PURE_VIRTUAL(GetBrush, return NULL;);
    
};

