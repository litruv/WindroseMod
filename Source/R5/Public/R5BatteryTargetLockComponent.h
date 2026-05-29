#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BatteryTargetLockComponent.generated.h"

class AActor;
class AController;
class APawn;
class UR5BatteryTargetLockParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BatteryTargetLockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetUpdate, AActor*, TargetActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnabledStatusChange, bool, Status);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetUpdate OnTargetUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnabledStatusChange OnEnabledStatusChange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BatteryTargetLockParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Target, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TargetLockEnabled, meta=(AllowPrivateAccess=true))
    bool bTargetLockActive;
    
public:
    UR5BatteryTargetLockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerToggleActive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReselectTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetLockEnabled();
    
    UFUNCTION()
    void OnRep_Target(const TWeakObjectPtr<AActor> InPreviousTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetLockEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPreviousTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(BlueprintCallable)
    void CameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState);
    
};

