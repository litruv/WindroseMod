#pragma once
#include "CoreMinimal.h"
#include "R5CoopProxy.h"
#include "R5CoopProxyStorage.h"
#include "R5CoopProxyClient.generated.h"

class UR5CoopAccountCollection;
class UR5CoopPlayerCollection;
class UR5CoopProxyClientInformer;
class UR5CoopProxyClient_TaskExecutor;
class UR5CoopProxyLoadingScreenHolder;

UCLASS(Blueprintable)
class R5COOPPROXY_API UR5CoopProxyClient : public UR5CoopProxy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopAccountCollection* AccountCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopPlayerCollection* PlayerCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopProxyClient_TaskExecutor* TaskExecutor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopProxyLoadingScreenHolder* LoadingScreenHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CoopProxyStorage BaseStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopProxyClientInformer* CoopProxyClientInformer;
    
public:
    UR5CoopProxyClient();

};

