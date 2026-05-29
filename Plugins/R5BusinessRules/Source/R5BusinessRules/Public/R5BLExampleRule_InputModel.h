#pragma once
#include "CoreMinimal.h"
#include "R5BLExampleRule_InputModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLExampleRule_InputModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FR5BLExampleRule_InputModel();
};

