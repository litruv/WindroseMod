#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopProxyClient_TaskExecutor.generated.h"

class UR5CaProxyClient;
class UR5CoopAccountCollection;
class UR5CoopPinger;
class UR5CoopProxyClient_Task;

UCLASS(Blueprintable)
class R5COOPPROXY_API UR5CoopProxyClient_TaskExecutor : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopAccountCollection* AccountCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopPinger* Pinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CaProxyClient* CaProxyClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5CoopProxyClient_Task*> TaskQueue;
    
public:
    UR5CoopProxyClient_TaskExecutor();

};

