#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5PassengerManagerComponent.generated.h"

class AActor;
class APawn;
class UR5PassengerMovementParams;
class UR5PassengerParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PassengerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemovePassenger, APawn*, RemovedPassenger);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAllPassengersRemoved);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddPassenger, APawn*, AddedPassenger);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnAddPassenger OnAddPassenger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnRemovePassenger OnRemovePassenger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnAllPassengersRemoved OnAllPassengersLeaveBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PassengerParams* Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PassengerMovementParams> PassengerMovementParams;
    
public:
    UR5PassengerManagerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPassengerDestroyed(AActor* Passenger);
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> BP_GetPassengersOfActor(AActor* TransportActor);
    
};

