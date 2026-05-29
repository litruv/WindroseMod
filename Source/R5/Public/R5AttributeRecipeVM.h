#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemAttribute -FallbackName=R5BLItemAttribute
#include "R5BLItemAttribute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
#include "R5RecipeVM.h"
#include "R5AttributeRecipeVM.generated.h"

class UR5BLInventoryItem;

UCLASS(Blueprintable)
class R5_API UR5AttributeRecipeVM : public UR5RecipeVM {
    GENERATED_BODY()
public:
    UR5AttributeRecipeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItemAttribute GetModifyAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAttributeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLInventoryItem> GetItemToModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemsToModifyCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItemsStackData GetItemsStackToModify() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemAttribute> GetItemAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAttributeValue() const;
    
};

