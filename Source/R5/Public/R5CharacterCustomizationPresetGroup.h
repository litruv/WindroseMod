#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5CharacterCustomizationPresetGroupOptionData.h"
#include "R5CharacterCustomizationPresetGroup.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5CharacterCustomizationPresetGroup : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CharacterCustomizationPresetGroupOptionData> GroupOptions;
    
    UR5CharacterCustomizationPresetGroup();

};

