#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "Math/IntVector.h"
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_Navigation.generated.h"

UCLASS(Blueprintable, Config=Engine)
class R5GAMEPLAYORCHESTRATOR_API UR5GOS_Navigation : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdatesAccumulationTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector NavigationChunksPerChunk;
    
public:
    UR5GOS_Navigation();

};

