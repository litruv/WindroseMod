#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ReviveComponent.generated.h"

class AActor;
class APawn;
class AR5EQSActor;
class AR5PlayerCharacter;
class UEnvQuery;
class UR5LoadingScreenHolder;
class UR5ReviveSettings;

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class R5_API UR5ReviveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdatedRevivePlace);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRevived, AR5PlayerCharacter*, PlayerCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedRevivePlace OnChangedRevivePlace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedRevivePlace OnCantChangeRevivePlace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedRevivePlace OnAlreadyChangedRevivePlace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRevived OnPlayerRevived;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ReviveSettings* ReviveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavePlayerLocationPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdatePlayerLocationPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* ShipQueryTemplate;
    
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double WaitForReviveAreaReadinessTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveZoneHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSkipNotForceSave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIntenseOrchestrationProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DeadPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5EQSActor* EQSActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5LoadingScreenHolder* LoadingScreenHolder;
    
public:
    UR5ReviveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAutosaveTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetLockLastLocationSave(bool Block);
    
    UFUNCTION(BlueprintCallable)
    void SaveSpawnPointsToDB();
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentPlayerDataToDB();
    
private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void PlayReviveSoundOnClient();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPointDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnPossessedChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDead(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReviveInProgress() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void HideLoadingScreen();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReviveTime() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReviveFinished();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPrepareForRevive(FVector Location);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnChangeRevivePlace();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnCantChangeRevivePlace();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlreadyChangeRevivePlace();
    
};

