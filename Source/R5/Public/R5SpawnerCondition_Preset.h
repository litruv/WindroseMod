#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerCondition.h"
#include "R5SpawnerCondition_Preset.generated.h"

class UR5SpawnerConditionPreset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerCondition_Preset : public UR5SpawnerCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5SpawnerConditionPreset> Preset;
    
public:
    UR5SpawnerCondition_Preset();

};

