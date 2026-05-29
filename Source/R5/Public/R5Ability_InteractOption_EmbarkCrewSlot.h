#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability_InteractOption_Base.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_InteractOption_EmbarkCrewSlot.generated.h"

class AActor;
class UGameplayEffect;
class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_EmbarkCrewSlot : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShipSteeringPlayerStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ChangeSlotInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* AbilityIMC;
    
public:
    UR5Ability_InteractOption_EmbarkCrewSlot();

protected:
    UFUNCTION(BlueprintCallable)
    void ServerDisembarkFromSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnDisembarkSlotInputHandled(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSlotInputHandled(const FInputActionInstance& InputActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void AvatarDeath(AActor* AvatarInstance);
    
};

