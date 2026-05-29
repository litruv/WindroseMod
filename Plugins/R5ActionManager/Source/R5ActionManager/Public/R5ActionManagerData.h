#pragma once
#include "CoreMinimal.h"
#include "R5ActionManagerData.generated.h"

class UR5AMListenerParams_Base;

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5ActionManagerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5AMListenerParams_Base*> ListenersParams;
    
    FR5ActionManagerData();
};

