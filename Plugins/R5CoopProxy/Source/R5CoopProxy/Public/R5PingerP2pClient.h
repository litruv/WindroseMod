#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CaProxy -ObjectName=R5CoopPingerClient -FallbackName=R5CoopPingerClient
#include "R5CoopPingerClient.h"
#include "R5PingerP2pClient.generated.h"

UCLASS(Blueprintable)
class R5COOPPROXY_API UR5PingerP2pClient : public UObject, public IR5CoopPingerClient {
    GENERATED_BODY()
public:
    UR5PingerP2pClient();


    // Fix for true pure virtual functions not being implemented
};

