#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5NewOverlapDamageState.h"
#include "OnStateChangedDelegate.h"
#include "R5NewOverlapDamageComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UNiagaraComponent;
class UR5NewOverlapDamageComponentParams;
class UR5OverlapDamageStateStrategy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5NewOverlapDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> OverlappedActorsToDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* InstigatorASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5OverlapDamageStateStrategy*> CurrentStateStrategies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NewOverlapDamageComponentParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRadiusCoeffChanged, meta=(AllowPrivateAccess=true))
    float CurrentRadiusCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UNiagaraComponent*> GlobalVFXs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ER5NewOverlapDamageState CurrentState;
    
public:
    UR5NewOverlapDamageComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRadiusCoeffChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChangeState(ER5NewOverlapDamageState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentState(ER5NewOverlapDamageState& OutState) const;
    
};

