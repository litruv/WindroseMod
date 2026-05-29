#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ContextualSpawnerList.generated.h"

class UR5ContextualSpawnerParams;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ContextualSpawnerList : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5ContextualSpawnerParams>> ContextualSpawners;
    
    UR5ContextualSpawnerList();

};

