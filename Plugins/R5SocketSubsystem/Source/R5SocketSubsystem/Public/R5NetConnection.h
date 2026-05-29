#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "IpConnection.h"
#include "R5NetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5SOCKETSUBSYSTEM_API UR5NetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UR5NetConnection();

};

