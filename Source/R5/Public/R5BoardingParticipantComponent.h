#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "ER5BoardingBattleResult.h"
#include "R5BoardingParticipantComponent.generated.h"

class APawn;
class UR5TaggedVolumeInvokerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BoardingParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBoardingParticipantDeletate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBoardingFightersCountChangedDeletate, uint8, AlliesCount, uint8, EnemyCount);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingParticipantDeletate OnStartParticipateBoardingBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingParticipantDeletate OnEndParticipateBoardingBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingParticipantDeletate OnWinBoardingBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingParticipantDeletate OnLoseBoardingBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingParticipantDeletate OnBoardingBridgesCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingParticipantDeletate OnAllObjectivesCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoardingFightersCountChangedDeletate OnFightersCountChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumeInvokerComponent* VolumeInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedResult, meta=(AllowPrivateAccess=true))
    ER5BoardingBattleResult ReplicatedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInActiveBoardingVolume, meta=(AllowPrivateAccess=true))
    bool bIsInActiveBoardingVolume;
    
public:
    UR5BoardingParticipantComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedResult();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInActiveBoardingVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged(APawn* NewPawn);
    
};

