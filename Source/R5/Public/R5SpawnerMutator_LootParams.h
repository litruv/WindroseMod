#pragma once
#include "CoreMinimal.h"
#include "R5SpawnerMutator.h"
#include "R5SpawnerMutator_LootParams.generated.h"

class UR5BLLootParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerMutator_LootParams : public UR5SpawnerMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> LootParams;
    
    UR5SpawnerMutator_LootParams();

};

