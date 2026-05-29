#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModel_CraftStation.generated.h"

class UR5BLCraftView;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class R5_API UR5MarkerModel_CraftStation : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdate OnQueueUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLCraftView* CraftView;
    
public:
    UR5MarkerModel_CraftStation();

protected:
    UFUNCTION(BlueprintCallable)
    void TryInitCraftView();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCraftInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetTimeStartCrafting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetTextureForCurrentQueue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftingRecipeProcessDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountRecipesInProgress() const;
    
};

