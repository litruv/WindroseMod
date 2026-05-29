#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5PlayerShipInfo.h"
#include "R5ShipownerComponent.generated.h"

class AActor;
class AR5ShipPawnBase;
class UR5BLPlayerView;
class UR5ShipownerParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipownerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnCreateNewShipInAccountSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnCreateNewShipInAccountSignature OnCreateNewShipInAccount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipownerParams* Params;
    
public:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AR5ShipPawnBase>> OwnedShipsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerView* PlayerView;
    
public:
    UR5ShipownerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnShipDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsShipDestroyed(const FR5BLRecordId& ShipId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwningShip(const AR5ShipPawnBase* ShipPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5PlayerShipInfo GetPlayerShipInfoByRecordId(const FR5BLRecordId& RecordId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5PlayerShipInfo> GetEquippedShipInfos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecordId GetEquippedShipId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5PlayerShipInfo> GetAllPlayerShipInfos();
    
};

