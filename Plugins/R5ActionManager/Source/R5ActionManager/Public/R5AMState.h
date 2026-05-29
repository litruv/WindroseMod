#pragma once
#include "CoreMinimal.h"
#include "R5AMState.generated.h"

class UR5AMListener_Base;

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AMListener_Base*> Listeners;
    
    FR5AMState();
};

