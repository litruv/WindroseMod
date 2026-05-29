#pragma once
#include "CoreMinimal.h"
#include "R5StaggerAnimData.h"
#include "R5ArrayStaggerAnimData.generated.h"

USTRUCT(BlueprintType)
struct FR5ArrayStaggerAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5StaggerAnimData> Staggers;
    
    R5_API FR5ArrayStaggerAnimData();
};

