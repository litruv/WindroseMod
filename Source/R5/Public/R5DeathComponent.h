#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "DeathEventData.h"
#include "R5IncomingDeathEventData.h"
#include "R5DeathComponent.generated.h"

class AActor;
class UR5BLLootParams;
class UR5DeathComponent;
class UR5DeathParams;
class UR5OverridesDeathLootParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5DeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeathSpectateStarted, UR5DeathParams*, DeathParams);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathSpectateEnded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, AActor*, Owner);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathSpectateStarted OnDeathSpectateStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathSpectateEnded OnDeathSpectateEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DeathParams* DeathParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> LootParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5OverridesDeathLootParams> OverridesLootParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval LootImpulseSizeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootImpulsePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeathEventData, meta=(AllowPrivateAccess=true))
    FDeathEventData DeathEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5IncomingDeathEventData> IncomingDeathEventData;
    
public:
    UR5DeathComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DeathEventData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5DeathParams* GetDeathParams() const;
    
    UFUNCTION(BlueprintCallable)
    static UR5DeathComponent* GetDeathComponent(const AActor* Actor);
    
};

