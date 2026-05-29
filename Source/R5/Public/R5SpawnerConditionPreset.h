#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5SpawnerConditionPreset.generated.h"

class UR5SpawnerCondition;

UCLASS(Blueprintable, NonTransient)
class UR5SpawnerConditionPreset : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SpawnerCondition* Condition;
    
    UR5SpawnerConditionPreset();

};

