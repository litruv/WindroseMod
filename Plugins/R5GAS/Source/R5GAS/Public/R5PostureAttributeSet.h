#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AttributeSet -FallbackName=AttributeSet
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "R5PostureAttributeSet.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class R5GAS_API UR5PostureAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnTakePostureDamage, float, RealDamage, float, IncomingDamage, float, NewPosture, float, MaxPosture, const UAbilitySystemComponent*, DamageInstigatorASC);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTakePostureDamage OnTakePostureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Posture, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Posture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxPosture, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxPosture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PostureRegenRate, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PostureRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData PostureDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GlobalPostureDamageDoneAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleePostureDamageDoneAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RangePostureDamageDoneAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DeflectPostureDamageDoneAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GlobalPostureDamageDoneModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleePostureDamageDoneModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RangePostureDamageDoneModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DeflectPostureDamageDoneModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GlobalPostureDamageDonePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleePostureDamageDonePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RangePostureDamageDonePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DeflectPostureDamageDonePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GlobalPostureDamageTakenResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleePostureDamageTakenResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RangePostureDamageTakenResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DeflectPostureDamageTakenResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GlobalPostureDamageTakenWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleePostureDamageTakenWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RangePostureDamageTakenWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DeflectPostureDamageTakenWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaggerPowerDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaggerPowerAdded, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaggerPowerAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaggerDefence, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StaggerDefence;
    
    UR5PostureAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StaggerPowerAdded(const FGameplayAttributeData& OldStaggerPowerAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaggerDefence(const FGameplayAttributeData& OldStaggerDefence);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PostureRegenRate(const FGameplayAttributeData& OldPostureRegenRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Posture(const FGameplayAttributeData& OldPosture);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxPosture(const FGameplayAttributeData& OldMaxPosture);
    
};

