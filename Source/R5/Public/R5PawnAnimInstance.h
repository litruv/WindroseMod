#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterSex -FallbackName=ER5BLCharacterSex
#include "ER5BLCharacterSex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AnimMontageForAbilityInterface -FallbackName=R5AnimMontageForAbilityInterface
#include "R5AnimMontageForAbilityInterface.h"
#include "ER5AnimBlockState.h"
#include "R5AimingInterface.h"
#include "R5AnimHitReactionInterface.h"
#include "R5BlockAnimInterface.h"
#include "R5CharacterCustomizationInterface.h"
#include "R5PawnAnimInstance.generated.h"

class AActor;
class UR5AnimMontageForAbilityParams;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5PawnAnimInstance : public UAnimInstance, public IR5AnimMontageForAbilityInterface, public IR5AimingInterface, public IR5AnimHitReactionInterface, public IR5CharacterCustomizationInterface, public IR5BlockAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AnimMontageForAbilityParams* AnimMontageParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMeleePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitReactionImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AnimBlockState AnimBlockState;
    
public:
    UR5PawnAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetViewMode(const FGameplayTag& ViewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetCharacterSex(ER5BLCharacterSex CharacterSex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetBodyMorphValue(FName MorphTargetName, float Value);
    

    // Fix for true pure virtual functions not being implemented
};

