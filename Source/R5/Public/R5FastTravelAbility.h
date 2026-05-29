#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5FastTravelAbility.generated.h"

class UObject;
class UR5FastTravelAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5FastTravelAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5FastTravelAbilityParams> Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadedAssets;
    
public:
    UR5FastTravelAbility();

private:
    UFUNCTION(BlueprintCallable)
    void PrepareFastTravelArea();
    
    UFUNCTION(BlueprintCallable)
    void PostFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void NetSyncStartFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void NetSyncPostFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void NetSyncFinishFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void FinishFastTravel();
    
    UFUNCTION(BlueprintCallable)
    void AfterTeleport();
    
};

