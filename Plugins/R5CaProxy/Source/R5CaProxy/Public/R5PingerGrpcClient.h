#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CoopPingerClient.h"
#include "R5PingerGrpcClient.generated.h"

UCLASS(Blueprintable)
class UR5PingerGrpcClient : public UObject, public IR5CoopPingerClient {
    GENERATED_BODY()
public:
    UR5PingerGrpcClient();


    // Fix for true pure virtual functions not being implemented
};

