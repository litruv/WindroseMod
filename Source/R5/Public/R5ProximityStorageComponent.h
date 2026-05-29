#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItem -FallbackName=R5BLItem
#include "R5BLItem.h"
#include "R5ProximityStorageComponent.generated.h"

class AActor;
class UR5BLInventoryView;
class UR5ProximityStorageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ProximityStorageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnProximityUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnProximityUpdated OnProximityUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* PlayerInventoryView;
    
public:
    UR5ProximityStorageComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryUpdateCurrentStorageCenter();
    
    UFUNCTION(BlueprintCallable)
    void OnStorageComponentChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnProximityStorageUpdated(const FR5BLRecordPath& ViewPath);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount(const FR5BLItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5ProximityStorageComponent* Get(const AActor* Actor);
    
};

