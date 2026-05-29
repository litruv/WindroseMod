#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopPinger.generated.h"

class IR5CoopPingerClient;
class UR5CoopPingerClient;

UCLASS(Blueprintable)
class R5CAPROXY_API UR5CoopPinger : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IR5CoopPingerClient> Pinger;
    
public:
    UR5CoopPinger();

};

