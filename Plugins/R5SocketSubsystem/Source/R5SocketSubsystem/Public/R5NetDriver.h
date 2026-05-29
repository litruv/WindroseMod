#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "IpNetDriver.h"
#include "R5NetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5SOCKETSUBSYSTEM_API UR5NetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPassthrough;
    
    UR5NetDriver();

};

