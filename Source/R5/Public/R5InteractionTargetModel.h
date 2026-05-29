#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5RequirementContext -FallbackName=R5RequirementContext
#include "R5RequirementContext.h"
#include "R5InteractionTargetModel.generated.h"

class AActor;
class UR5InteractionOption;
class UR5Requirement;

UCLASS(Blueprintable)
class R5_API UR5InteractionTargetModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOptionsSignature, const TArray<UR5InteractionOption*>&, Options);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FModelChangedSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelChangedSignature OnModelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionsSignature OnOptionsChanged;
    
    UR5InteractionTargetModel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnOptionAccessibilityChanged(bool bAccessible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractInhibited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTargetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5RequirementContext GetRequirementContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5Requirement* GetPrimaryInteractRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractionTargetAvatar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5InteractionOption*> GetInteractionOptions() const;
    
};

