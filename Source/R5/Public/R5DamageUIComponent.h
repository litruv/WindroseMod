#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
#include "R5CollectedDamageInstance.h"
#include "R5DamageUIComponent.generated.h"

class AActor;
class UR5DamageUIParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5DamageUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDealtInstanceCollected, FR5CollectedDamageInstance, DamageInstance);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageDealtInstanceCollected OnDamageDealtInstanceCollected;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageUIParams* Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FR5CollectedDamageInstance> CollectedDamageInstances;
    
public:
    UR5DamageUIComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnASCDamageDealt(AActor* InActor, float InIncomingDamage, float InDealtDamage, float ArmorDamageReduction, bool bIsKillDamage, const FGameplayEffectSpec& InGameplayEffectSpec);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticastDamageDealt(const FR5CollectedDamageInstance& DamageInstance);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientDamageDealt(const FR5CollectedDamageInstance& DamageInstance);
    
};

