#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5CharacterCustomizationPresetSkinDecorData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5CharacterCustomizationPresetSkinDecorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkinDecorUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorPaletteIndex;
    
    FR5CharacterCustomizationPresetSkinDecorData();
};

