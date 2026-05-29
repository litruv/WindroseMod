#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CaProxyServer.generated.h"

class UR5CaHttpClient;
class UR5CoopPinger;

UCLASS(Blueprintable)
class R5CAPROXY_API UR5CaProxyServer : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CaHttpClient* HttpClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopPinger* Pinger;
    
public:
    UR5CaProxyServer();

};

