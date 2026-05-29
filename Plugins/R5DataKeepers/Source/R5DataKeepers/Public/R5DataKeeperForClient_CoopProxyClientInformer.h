#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CoopProxy -ObjectName=R5CoopProxyClientInformer -FallbackName=R5CoopProxyClientInformer
#include "R5CoopProxyClientInformer.h"
#include "R5DataKeeperForClient_CoopProxyClientInformer.generated.h"

UCLASS(Blueprintable)
class UR5DataKeeperForClient_CoopProxyClientInformer : public UR5CoopProxyClientInformer {
    GENERATED_BODY()
public:
    UR5DataKeeperForClient_CoopProxyClientInformer();

};

