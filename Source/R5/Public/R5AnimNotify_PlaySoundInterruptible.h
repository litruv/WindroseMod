#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify_PlaySound -FallbackName=AnimNotify_PlaySound
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AnimNotify_PlaySoundInterruptible.generated.h"

UCLASS(Blueprintable, CollapseCategories, DefaultConfig, Config=Engine)
class R5_API UR5AnimNotify_PlaySoundInterruptible : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InterruptTag;
    
public:
    UR5AnimNotify_PlaySoundInterruptible();

};

