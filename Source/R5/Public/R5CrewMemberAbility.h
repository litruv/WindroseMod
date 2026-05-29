#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5CrewMemberAbility.generated.h"

class AActor;
class UGameplayEffect;
class UInputAction;
class UInputMappingContext;

UCLASS(Blueprintable)
class R5_API UR5CrewMemberAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LeaveSlotInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ChangeSlotInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* AbilityIMC;
    
public:
    UR5CrewMemberAbility();

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

