#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5PhysicsLaunchPresetData.h"
#include "R5PhysicsLaunchPresetsData.generated.h"

USTRUCT(BlueprintType)
struct FR5PhysicsLaunchPresetsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PhysicsLaunchPresetData DefaultPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5PhysicsLaunchPresetData> Presets;
    
    R5PHYSICSLAUNCH_API FR5PhysicsLaunchPresetsData();
};

