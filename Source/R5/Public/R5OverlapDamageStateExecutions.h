#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStateStrategy.h"
#include "R5OverlapDamageStateExecutions.generated.h"

class UR5OverlapDamageStrategy;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStateExecutions : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5OverlapDamageStrategy*> Strategies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5OverlapDamageStrategy*> ActiveStrategies;
    
public:
    UR5OverlapDamageStateExecutions();

};

