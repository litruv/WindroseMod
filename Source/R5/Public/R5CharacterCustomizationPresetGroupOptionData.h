#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterAge -FallbackName=ER5BLCharacterAge
#include "ER5BLCharacterAge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterColorData -FallbackName=R5BLCharacterColorData
#include "R5BLCharacterColorData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterMorphData -FallbackName=R5BLCharacterMorphData
#include "R5BLCharacterMorphData.h"
#include "R5CharacterCustomizationPresetSkinDecorData.h"
#include "R5CharacterCustomizationPresetGroupOptionData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5CharacterCustomizationPresetGroupOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCharacterMorphData> MorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> MeshUIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CharacterCustomizationPresetSkinDecorData> SkinDecorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCharacterColorData> ColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EyeColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkinDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCharacterAge CharacterAge;
    
    FR5CharacterCustomizationPresetGroupOptionData();
};

