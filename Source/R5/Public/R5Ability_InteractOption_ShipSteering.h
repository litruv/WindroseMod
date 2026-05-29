#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability_InteractOption_Base.h"
#include "R5Ability_InteractOption_ShipSteering.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_ShipSteering : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BlockingAnimSlotsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShipSteeringPlayerStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShipSteeringDisembarkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerCharacterDeathStateTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventData TriggerEvent;
    
public:
    UR5Ability_InteractOption_ShipSteering();

private:
    UFUNCTION(BlueprintCallable)
    void DisembarkRequested();
    
    UFUNCTION(BlueprintCallable)
    void AvatarAliveStatusChanged(bool bAliveStatus);
    
};

