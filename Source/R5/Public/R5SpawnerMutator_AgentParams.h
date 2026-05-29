#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerMutator.h"
#include "R5SpawnerMutator_AgentParams.generated.h"

class UR5AS_AgentParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerMutator_AgentParams : public UR5SpawnerMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5AS_AgentParams> AgentParams;
    
    UR5SpawnerMutator_AgentParams();

};

