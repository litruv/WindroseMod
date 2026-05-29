#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "R5BuildingBlocksDestroyManager.generated.h"

class AR5BuildingBlock;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlocksDestroyManager : public AInfo {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BuildingBlock*> CachedBlocksForDestroy;
    
public:
    AR5BuildingBlocksDestroyManager(const FObjectInitializer& ObjectInitializer);

};

