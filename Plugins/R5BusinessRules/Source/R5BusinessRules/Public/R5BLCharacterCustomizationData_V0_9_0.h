#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5BLCharacterAge_V0_9_0.h"
#include "ER5BLCharacterSex_V0_9_0.h"
#include "R5BLCharacterColorData_V0_9_0.h"
#include "R5BLCharacterEyeDecorData_V0_9_0.h"
#include "R5BLCharacterMorphData_V0_9_0.h"
#include "R5BLCharacterSkinDecorData_V0_9_0.h"
#include "R5BLCharacterCustomizationData_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterCustomizationData_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCharacterSex_V0_9_0 CharacterSex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCharacterAge_V0_9_0 CharacterAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterSkinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCharacterMorphData_V0_9_0> SelectedMorph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCharacterColorData_V0_9_0> SelectedColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCharacterSkinDecorData_V0_9_0> SelectedSkinDecor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCharacterEyeDecorData_V0_9_0 SelectedEyeDecor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    FR5BLCharacterCustomizationData_V0_9_0();
};

