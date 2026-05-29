#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5RecoilTaskData_Base.h"
#include "R5RecoilTaskParams_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UR5RecoilTaskParams_Base : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RecoilTaskData_Base BaseData;
    
    UR5RecoilTaskParams_Base();

};

