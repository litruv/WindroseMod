#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5GATD_OutOfPostureSound.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct R5_API FR5GATD_OutOfPostureSound : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OwnerPlayer2DSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OtherPlayers3DSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    FR5GATD_OutOfPostureSound();
};

