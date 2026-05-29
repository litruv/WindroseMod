#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5PassengerTransportInterface.h"
#include "R5WaterPlane_PlayerData.h"
#include "Templates/SubclassOf.h"
#include "R5WaterPlane.generated.h"

class APawn;
class UAbilitySystemComponent;
class UGameplayEffect;
class UR5PassengerManagerComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5WaterPlane : public AActor, public IR5PassengerTransportInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlaneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PassengerManagerComponent* PassengerManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> WaterDamageDebuffGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ActionDebuffGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeApplyGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UAbilitySystemComponent>, FR5WaterPlane_PlayerData> EffectStatuses;
    
public:
    AR5WaterPlane(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RemovePassenger(APawn* PassengerInstance);
    
    UFUNCTION(BlueprintCallable)
    void AddPassenger(APawn* PassengerInstance);
    

    // Fix for true pure virtual functions not being implemented
};

