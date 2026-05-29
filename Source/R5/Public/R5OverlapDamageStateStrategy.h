#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStrategy.h"
#include "R5OverlapDamageStateStrategy.generated.h"

UCLASS(Blueprintable)
class R5_API UR5OverlapDamageStateStrategy : public UR5OverlapDamageStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClientExecution;
    
    UR5OverlapDamageStateStrategy();

};

