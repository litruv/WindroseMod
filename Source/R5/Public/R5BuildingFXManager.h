#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "R5BuildingFXSpawnData.h"
#include "R5BuildingFXManager.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingFXManager : public AInfo {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingFXSpawnData> AccumulatedEffects;
    
public:
    AR5BuildingFXManager(const FObjectInitializer& ObjectInitializer);

};

