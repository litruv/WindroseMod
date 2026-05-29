#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectRemovalInfo -FallbackName=GameplayEffectRemovalInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5DynamicComponent -FallbackName=R5DynamicComponent
#include "R5DynamicComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5EquipmentGameplayEffectCosmeticData -FallbackName=R5EquipmentGameplayEffectCosmeticData
#include "R5EquipmentGameplayEffectCosmeticData.h"
#include "R5AdditionalEquipmentEffectsContainer.h"
#include "Templates/SubclassOf.h"
#include "R5EquipmentItem.generated.h"

class UGameplayEffect;
class UR5EquipmentItemLogicParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5EquipmentItem : public UR5DynamicComponent, public IR5AdditionalEquipmentEffectsContainer {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EquipmentItemLogicParams* LogicParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> AdditionalEquipmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5EquipmentGameplayEffectCosmeticData CosmeticData;
    
public:
    UR5EquipmentItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
    

    // Fix for true pure virtual functions not being implemented
};

