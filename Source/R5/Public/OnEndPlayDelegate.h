#pragma once
#include "CoreMinimal.h"
#include "OnEndPlayDelegate.generated.h"

class UNiagaraComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndPlay, UNiagaraComponent*, Trail);

