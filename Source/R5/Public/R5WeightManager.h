#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5WeightManager.generated.h"

class APawn;
class UR5BLInventoryView;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5WeightManager : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeightUpdate, float, Delta, float, TotalWeight);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeightUpdate OnWeightUpdate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UR5BLInventoryView*> Inventories;
    
public:
    UR5WeightManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRemovePassengerFromOwner(APawn* Passenger);
    
    UFUNCTION(BlueprintCallable)
    void OnAddPassengerOnOwner(APawn* Passenger);
    
};

