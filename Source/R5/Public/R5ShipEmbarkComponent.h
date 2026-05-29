#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "Templates/SubclassOf.h"
#include "R5ShipEmbarkComponent.generated.h"

class AActor;
class UAnimInstance;
class UInputAction;
class UPrimitiveComponent;
class UR5ShipEmbarkParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipEmbarkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmbark, const FVector&, EmbarkLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisembarkRequested);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisembark, const FVector&, DisembarkLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCaptainChanged, AActor*, NewCaptain, AActor*, OldCaptain);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptainChanged OnCaptainChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEmbark OnEmbark;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisembark OnDisembark;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipEmbarkParams* EmbarkParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* DisembarkAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> CharacterSteeringAnimLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> HullComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Captain, meta=(AllowPrivateAccess=true))
    AActor* Captain;
    
public:
    UR5ShipEmbarkComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDisembarkCaptain();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Captain(AActor* OldCaptain);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastEmbarkNotify(const FVector_NetQuantize& Location, bool Embark);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CaptainDeath(AActor* DeadCaptain);
    
    UFUNCTION(BlueprintCallable)
    void AliveStatusChanged(bool bAliveStatus);
    
};

