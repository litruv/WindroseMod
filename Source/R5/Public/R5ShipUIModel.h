#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ShipUIModel.generated.h"

class AActor;
class ACharacter;
class UR5AbilitySystemComponent;
class UR5ShipUIModel;

UCLASS(Blueprintable)
class R5_API UR5ShipUIModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5AttributeChanged, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVoyageStatusChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeMaxHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoyageStatusChanged OnVoyageStatusChanged;
    
    UR5ShipUIModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepair() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVoyage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRepairHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRepairCooldownTime(float& DurationTime, float& RemainingTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AbilitySystemComponent* GetR5ASC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCaptain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5ShipUIModel* CreateShipUIModel(AActor* Ship);
    
};

