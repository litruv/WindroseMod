#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "ER5ShipType.h"
#include "R5ShipStaticParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipStaticParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ShipType ShipType;
    
    UR5ShipStaticParams();

};

