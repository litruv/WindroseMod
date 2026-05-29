#pragma once
#include "CoreMinimal.h"
#include "R5RecoilTaskData_Simple.h"
#include "R5RecoilTaskParams_Base.h"
#include "R5RecoilTaskParams_Simple.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5RecoilTaskParams_Simple : public UR5RecoilTaskParams_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RecoilTaskData_Simple Data;
    
public:
    UR5RecoilTaskParams_Simple();

};

