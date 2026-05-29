#pragma once
#include "CoreMinimal.h"
#include "ER5RangeWeaponReloadEventType.h"
#include "R5EquipmentItemUI.h"
#include "R5RangeWeaponAmmoUpdate.h"
#include "R5RangeWeaponPassiveReloadUpdate.h"
#include "R5ReloadStateUIData.h"
#include "R5RangeWeaponItemUI.generated.h"

class UR5RangeWeaponItemUIParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5RangeWeaponItemUI : public UR5EquipmentItemUI {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShootHappened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScatterRadiusUpdated, float, ScatterRadius);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReloadStateChanged, const FR5ReloadStateUIData&, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRangeWeaponAbilityStateChanged, bool, bActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPassiveReloadRatioUpdated, FR5RangeWeaponPassiveReloadUpdate, PassiveReloadUpdate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFractionReloadStarted, const TArray<FR5ReloadStateUIData>&, StatesData, const FR5ReloadStateUIData&, CurrentState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAvailableShotsCountChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttemptToShoot, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAmmoUpdatedUI, FR5RangeWeaponAmmoUpdate, RangeWeaponAmmo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveReloadUpdated, ER5RangeWeaponReloadEventType, EventType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAmmoUpdatedUI OnAmmoUpdatedUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPassiveReloadRatioUpdated OnPassiveReloadRatioUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveReloadUpdated OnActiveReloadUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFractionReloadStarted OnActiveReloadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReloadStateChanged OnActiveReloadStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRangeWeaponAbilityStateChanged OnRangeWeaponAbilityStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttemptToShoot OnAttemptToShoot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShootHappened OnShootHappened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScatterRadiusUpdated OnScatterRadiusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAvailableShotsCountChanged OnAvailableShotsCountChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemUIParams* Params;
    
public:
    UR5RangeWeaponItemUI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeWeaponInHands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangeWeaponAbilityInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveReloadInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScatterRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPassiveReloadRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableShotsCount() const;
    
};

