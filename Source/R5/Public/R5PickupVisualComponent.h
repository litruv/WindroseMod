#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "EAutoPickLootMode.h"
#include "InventoryItemVisualData.h"
#include "R5PickupVisualComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PickupVisualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickModeChanged, const EAutoPickLootMode&, NewMode);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnAutoPickMode, meta=(AllowPrivateAccess=true))
    EAutoPickLootMode AutoPickMode;
    
public:
    UR5PickupVisualComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPickMode(const EAutoPickLootMode& NewMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnAutoPickMode();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnVisualItems(const TArray<FInventoryItemVisualData>& Data, float FlightTime);
    
};

