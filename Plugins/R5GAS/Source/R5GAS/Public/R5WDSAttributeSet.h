#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AttributeSet -FallbackName=AttributeSet
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "R5WDSAttributeSet.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5WDSAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WDSCombatDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WDSDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WDSHealthMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WDSHealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WDSCoopHealthMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WDSCoopHealthMultiplier;
    
    UR5WDSAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WDSHealthMultiplier(const FGameplayAttributeData& OldWDSHealthMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WDSCoopHealthMultiplier(const FGameplayAttributeData& OldWDSCoopHealthMultiplier);
    
};

