#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "R5BuildingItemInterface.generated.h"

class UObject;
class UR5BLRecipeData;
class UR5BuildingBrush;
class UTexture2D;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UR5BuildingItemInterface : public UInterface {
    GENERATED_BODY()
};

class IR5BuildingItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsVisible() const PURE_VIRTUAL(IsVisible, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsLockedByRecipe() const PURE_VIRTUAL(IsLockedByRecipe, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UR5BLRecipeData* GetRecipe() const PURE_VIRTUAL(GetRecipe, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSoftObjectPtr<UTexture2D> GetIcon() const PURE_VIRTUAL(GetIcon, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UR5BuildingBrush* GetBrush(UObject* Wco) const PURE_VIRTUAL(GetBrush, return NULL;);
    
};

