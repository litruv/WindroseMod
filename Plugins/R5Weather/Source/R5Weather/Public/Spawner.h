#pragma once
#include "CoreMinimal.h"
#include "Spawner.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNiagaraComponent> NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActual;
    
    R5WEATHER_API FSpawner();
};

