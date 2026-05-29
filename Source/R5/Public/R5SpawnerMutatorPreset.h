#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5SpawnerMutatorChain.h"
#include "R5SpawnerMutatorPreset.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5SpawnerMutatorPreset : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SpawnerMutatorChain Chain;
    
    UR5SpawnerMutatorPreset();

};

