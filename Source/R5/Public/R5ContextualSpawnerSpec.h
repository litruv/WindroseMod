#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "R5ContextualSpawnerParticipantInfo.h"
#include "R5ContextualSpawnerSpec.generated.h"

class AActor;
class UR5ContextualSpawnerParams;

USTRUCT(BlueprintType)
struct FR5ContextualSpawnerSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ContextualSpawnerParams* Params;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FR5ContextualSpawnerParticipantInfo> ParticipantInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerScoreHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSpawnedEntityName;
    
    R5_API FR5ContextualSpawnerSpec();
};

