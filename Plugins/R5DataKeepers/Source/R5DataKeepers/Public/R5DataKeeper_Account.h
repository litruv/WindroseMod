#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5DataKeeperStateLogger.h"
#include "R5DataKeeper_Account.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeper_Account : public UObject, public IR5DataKeeperStateLogger {
    GENERATED_BODY()
public:
    UR5DataKeeper_Account();


    // Fix for true pure virtual functions not being implemented
};

