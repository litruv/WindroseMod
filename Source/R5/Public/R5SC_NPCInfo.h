#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5SC_NPCInfo.generated.h"

class UR5NPCCommonViewParams;
class UR5NPCInfoVM;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_NPCInfo : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPCCommonViewParams* CommonNPCViewParams;
    
public:
    UR5SC_NPCInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5NPCInfoVM* GetNPCInfoVM() const;
    
};

