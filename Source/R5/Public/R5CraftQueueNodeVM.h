#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "Misc/Timespan.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "R5CraftQueueNodeVM.generated.h"

class UR5BLRecipeData;
class UR5BLRecipeDataView;
class UR5MVVMObserver_Craft;

UCLASS(Blueprintable)
class R5_API UR5CraftQueueNodeVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Craft* CraftObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLRecipeDataView* RecipeView;
    
public:
    UR5CraftQueueNodeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopRecipeCraftDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTimeToFinishCraftingRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetStartCraftTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRecipesCountInStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BLRecipeData* GetNodeRecipeInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLRecipeData> GetNodeRecipe() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelNode();
    
};

