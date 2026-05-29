#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5LevelUpInfo.h"
#include "R5EntityProgressionVM.generated.h"

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5EntityProgressionVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnLevelUpdatedView, const FR5LevelUpInfo&, LevelUpInfo);
    
    UR5EntityProgressionVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevelTalentPointsReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevelStatPointsReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExpToNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentExp() const;
    
};

