#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AttributeSet -FallbackName=AttributeSet
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "R5WeightAttributeSet.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5WeightAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CarriedWeight, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CarriedWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxWeightCapacity, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxWeightCapacity;
    
    UR5WeightAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxWeightCapacity(const FGameplayAttributeData& OldMaxWeightCapacity);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarriedWeight(const FGameplayAttributeData& OldCarriedWeight);
    
};

