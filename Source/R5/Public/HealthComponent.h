#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class AActor;
class UHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, Health, float, MaxHealth);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAliveStatusChanged, bool, bAlive);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAliveStatusChanged OnAliveStatusChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChangedAliveState, meta=(AllowPrivateAccess=true))
    bool bAlive;
    
public:
    UHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ChangedAliveState();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsAliveActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    static UHealthComponent* GetHealthComponent(const AActor* Actor);
    
};

