#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5SC_NPCDispatcher.generated.h"

class UR5NPCCommonViewParams;
class UR5NPCDispatcherVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_NPCDispatcher : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPCCommonViewParams* CommonNPCViewParams;
    
public:
    UR5SC_NPCDispatcher();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5NPCDispatcherVM* GetNPCDispatcherVM() const;
    
};

