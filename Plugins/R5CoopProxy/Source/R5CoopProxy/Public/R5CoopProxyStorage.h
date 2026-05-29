#pragma once
#include "CoreMinimal.h"
#include "R5CoopProxyStorage.generated.h"

class UR5CoopHostServerManager;
class UR5CoopIslandCollection;
class UR5CoopPinger;
class UR5CoopServerDescriptionManager;

USTRUCT(BlueprintType)
struct FR5CoopProxyStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopIslandCollection* IslandCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopServerDescriptionManager* ServerDescriptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopPinger* Pinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CoopHostServerManager* HostServerManager;
    
    R5COOPPROXY_API FR5CoopProxyStorage();
};

