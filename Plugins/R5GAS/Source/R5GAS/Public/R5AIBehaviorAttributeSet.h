#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AttributeSet -FallbackName=AttributeSet
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "R5AIBehaviorAttributeSet.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AIBehaviorAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Aggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Difficulty, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Difficulty;
    
    UR5AIBehaviorAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Difficulty(const FGameplayAttributeData& OldDifficulty);
    
};

