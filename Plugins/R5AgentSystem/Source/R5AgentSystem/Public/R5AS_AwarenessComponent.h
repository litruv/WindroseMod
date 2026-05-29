#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5AS_AwarenessComponent.generated.h"

class AActor;
class UR5AS_AwarenessComponent;
class UR5AwarenessComponentParams;
class UR5ThreatComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5AGENTSYSTEM_API UR5AS_AwarenessComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnAwarenessTargetUpdate, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateThreat, UR5ThreatComponent*, ThreatComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateThreat OnAddThreat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateThreat OnRemoveThreat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnAwarenessTargetUpdate OnAggressiveTargetAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnAwarenessTargetUpdate OnAggressiveTargetRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnAwarenessTargetUpdate OnAlertTargetAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnAwarenessTargetUpdate OnAlertTargetRemoved;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AwarenessComponentParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AggressionTargets, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AggressionTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedAggressionTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5ThreatComponent*> Threats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlertTargets, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AlertTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedAlertTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IndirectAggressiveTargets;
    
public:
    UR5AS_AwarenessComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AlertTargets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AggressionTargets();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5ThreatComponent*> GetThreats() const;
    
    UFUNCTION(BlueprintCallable)
    static UR5AS_AwarenessComponent* GetAwarenessComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAlertTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAggressiveTargets() const;
    
};

