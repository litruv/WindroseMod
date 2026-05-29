#pragma once
#include "CoreMinimal.h"
#include "R5TargetData_StaggerVisual.h"
#include "Templates/SubclassOf.h"
#include "R5StaggerDamageGEData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5StaggerDamageGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StaggerDamageGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaggerPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TargetData_StaggerVisual StaggerTargetData;
    
    R5_API FR5StaggerDamageGEData();
};

