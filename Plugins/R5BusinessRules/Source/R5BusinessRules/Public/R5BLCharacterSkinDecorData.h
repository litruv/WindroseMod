#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5BLCharacterBodyPartType.h"
#include "R5BLCharacterSkinDecorData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterSkinDecorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCharacterBodyPartType BodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectedDecorUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedColorPaletteIndex;
    
    FR5BLCharacterSkinDecorData();
};

