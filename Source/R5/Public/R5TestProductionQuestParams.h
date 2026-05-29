#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5TestProductionQuestParams.generated.h"

class UR5BLQuestParams;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5TestProductionQuestParams : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLQuestParams>> ProductionQuestsList;
    
    UR5TestProductionQuestParams();

};

