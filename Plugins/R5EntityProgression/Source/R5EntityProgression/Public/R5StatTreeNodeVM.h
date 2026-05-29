#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLPerkInfo -FallbackName=R5BLPerkInfo
#include "R5BLPerkInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5StatTreeNodeVM.generated.h"

class UR5ProgressionTreeNodeModel;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5StatTreeNodeVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ProgressionTreeNodeModel* NodeModel;
    
public:
    UR5StatTreeNodeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAttributeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttributePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttributeMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLPerkInfo GetAttributeInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpNodeLevel() const;
    
};

