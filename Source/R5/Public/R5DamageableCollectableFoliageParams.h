#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5DamageableFoliageParams.h"
#include "R5FoliageLootSet.h"
#include "R5DamageableCollectableFoliageParams.generated.h"

class UR5SpawnLootSetup;

UCLASS(Blueprintable)
class R5_API UR5DamageableCollectableFoliageParams : public UR5DamageableFoliageParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SpawnLootSetup* CollectLootSpawnSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5FoliageLootSet> CollectLootSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectLootDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CollectLootRelativeTransform;
    
    UR5DamageableCollectableFoliageParams();

};

