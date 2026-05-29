#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5CharacterCustomizationPresetParams.generated.h"

class UR5CharacterCustomizationPresetArchetype;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5CharacterCustomizationPresetParams : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5CharacterCustomizationPresetArchetype>> ArchetypePresets;
    
    UR5CharacterCustomizationPresetParams();

};

