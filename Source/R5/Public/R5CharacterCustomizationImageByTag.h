#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5CharacterCustomizationImageByTag.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FR5CharacterCustomizationImageByTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UTexture2D>> TextureByTag;
    
    R5_API FR5CharacterCustomizationImageByTag();
};

