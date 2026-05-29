#pragma once
#include "CoreMinimal.h"
#include "R5MaterialParametersData.h"
#include "R5ShipItemParams.h"
#include "R5SailItemParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5SailItemParams : public UR5ShipItemParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FR5MaterialParametersData> ComponentParametersMap;
    
    UR5SailItemParams();

};

