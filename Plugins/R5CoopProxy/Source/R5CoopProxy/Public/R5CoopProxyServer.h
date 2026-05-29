#pragma once
#include "CoreMinimal.h"
#include "R5CoopProxy.h"
#include "R5CoopProxyStorage.h"
#include "R5CoopProxyServer.generated.h"

class UR5CaProxyServer;
class UR5CoopProxyServerInformer;

UCLASS(Blueprintable)
class R5COOPPROXY_API UR5CoopProxyServer : public UR5CoopProxy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CaProxyServer* CaProxyServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopProxyServerInformer* CoopProxyServerInformer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CoopProxyStorage BaseStorage;
    
public:
    UR5CoopProxyServer();

};

