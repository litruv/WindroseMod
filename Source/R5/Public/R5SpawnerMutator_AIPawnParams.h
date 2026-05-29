#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerMutator.h"
#include "R5SpawnerMutator_AIPawnParams.generated.h"

class UR5AIPawnParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerMutator_AIPawnParams : public UR5SpawnerMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5AIPawnParams> AIPawnParams;
    
    UR5SpawnerMutator_AIPawnParams();

};

