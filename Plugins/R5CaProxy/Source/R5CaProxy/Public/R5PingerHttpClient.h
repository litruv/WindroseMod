#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5BaseHttpClient -FallbackName=R5BaseHttpClient
#include "R5BaseHttpClient.h"
#include "R5CoopPingerClient.h"
#include "R5PingerHttpClient.generated.h"

UCLASS(Blueprintable)
class R5CAPROXY_API UR5PingerHttpClient : public UR5BaseHttpClient, public IR5CoopPingerClient {
    GENERATED_BODY()
public:
    UR5PingerHttpClient();


    // Fix for true pure virtual functions not being implemented
};

