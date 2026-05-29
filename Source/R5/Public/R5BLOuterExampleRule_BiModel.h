#pragma once
#include "CoreMinimal.h"
#include "R5BLOuterExampleRule_BiModel.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5BLOuterExampleRule_BiModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FR5BLOuterExampleRule_BiModel();
};

