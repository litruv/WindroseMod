#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CoopProxy -ObjectName=R5CoopProxyServerInformer -FallbackName=R5CoopProxyServerInformer
#include "R5CoopProxyServerInformer.h"
#include "R5DataKeeperForServer_CoopProxyServerInformer.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperForServer_CoopProxyServerInformer : public UR5CoopProxyServerInformer {
    GENERATED_BODY()
public:
    UR5DataKeeperForServer_CoopProxyServerInformer();

};

