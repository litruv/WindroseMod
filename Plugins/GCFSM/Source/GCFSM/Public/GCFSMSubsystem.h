#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "Subsystems/EngineSubsystem.h"
#include "GCFSMSubsystem.generated.h"

class UGCFSMRootState;

UCLASS(Blueprintable)
class GCFSM_API UGCFSMSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint64, UGCFSMRootState*> activeContexts;
    
public:
    UGCFSMSubsystem();

};

