#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AbilityTask_DefaultInstanced -FallbackName=R5AbilityTask_DefaultInstanced
#include "R5AbilityTask_DefaultInstanced.h"
#include "R5AbilityTask_UseStaticActionOnFloor.generated.h"

class UR5UseStaticActionOnFloor;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_UseStaticActionOnFloor : public UR5AbilityTask_DefaultInstanced {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UseStaticActionOnFloor* Params;
    
public:
    UR5AbilityTask_UseStaticActionOnFloor();

};

