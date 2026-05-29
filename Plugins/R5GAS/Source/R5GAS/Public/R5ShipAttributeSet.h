#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "AttributeSet.h"
#include "R5AttributeSet.h"
#include "R5ShipAttributeSet.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ShipAttributeSet : public UR5AttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoostMaxEnergy, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BoostMaxEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoostMinEnergyToStartModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BoostMinEnergyToStartModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MotorPowerGainModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MotorPowerGainModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MotorPowerLossModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MotorPowerLossModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoostCurrentEnergy, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BoostCurrentEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnergyBurnInCombatModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnergyBurnInCombatModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnergyBurnOutOfCombatModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnergyBurnOutOfCombatModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnergyBurnAbortModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnergyBurnAbortModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnergyAccumulationModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData EnergyAccumulationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MotorPowerMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MotorPowerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InnerAimingRadiusModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData InnerAimingRadiusModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OuterAimingRadiusModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData OuterAimingRadiusModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SightingTimeModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SightingTimeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SightingDisturbanceCoefficientModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SightingDisturbanceCoefficientModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SightingDisturbanceByShotModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SightingDisturbanceByShotModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShotRangeMinDistanceModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ShotRangeMinDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShotRangeMaxDistanceModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ShotRangeMaxDistanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ScatterModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ScatterModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReloadModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ReloadModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HullThicknessArmor, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HullThicknessArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HullThicknessArmorModifier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HullThicknessArmorModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SailMaxHealth, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SailMaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SailHealth, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SailHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SailHealthRegen, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SailHealthRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SailDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SailHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LeakDamageDoneModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LeakDamageDonePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LeakDamageTakenResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LeakDamageTakenWeakness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RoundShotPenetrationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ChainShotPenetrationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData RoundShotLeakChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ChainShotLeakChanceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CrewCombatPower;
    
    UR5ShipAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SightingTimeModifier(const FGameplayAttributeData& InSightingTimeModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SightingDisturbanceCoefficientModifier(const FGameplayAttributeData& InSightingDisturbanceCoefficientModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SightingDisturbanceByShotModifier(const FGameplayAttributeData& InSightingDisturbanceByShotModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShotRangeMinDistanceModifier(const FGameplayAttributeData& InShotRangeMinDistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShotRangeMaxDistanceModifier(const FGameplayAttributeData& InShotRangeMaxDistanceModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScatterModifier(const FGameplayAttributeData& InScatterModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SailMaxHealth(const FGameplayAttributeData& InSailMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SailHealthRegen(const FGameplayAttributeData& InSailHealthRegen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SailHealth(const FGameplayAttributeData& InSailHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadModifier(const FGameplayAttributeData& InReloadModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OuterAimingRadiusModifier(const FGameplayAttributeData& InOuterAimingRadiusModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MotorPowerMultiplier(const FGameplayAttributeData& InMotorPowerMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MotorPowerLossModifier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MotorPowerGainModifier(const FGameplayAttributeData& InMotorPowerGainModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InnerAimingRadiusModifier(const FGameplayAttributeData& InInnerAimingRadiusModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HullThicknessArmorModifier(const FGameplayAttributeData& InHullThicknessArmorModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HullThicknessArmor(const FGameplayAttributeData& InHullThicknessArmor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyBurnOutOfCombatModifier(const FGameplayAttributeData& InEnergyBurnOutOfCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyBurnInCombatModifier(const FGameplayAttributeData& InEnergyBurnInCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyBurnAbortModifier(const FGameplayAttributeData& InEnergyBurnAbort);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyAccumulationModifier(const FGameplayAttributeData& InEnergyAccumulation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostMinEnergyToStartModifier(const FGameplayAttributeData& InBoostMinEnergyToStart);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostMaxEnergy(const FGameplayAttributeData& InBoostMaxEnergy);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoostCurrentEnergy(const FGameplayAttributeData& InBoostCurrentEnergy);
    
};

