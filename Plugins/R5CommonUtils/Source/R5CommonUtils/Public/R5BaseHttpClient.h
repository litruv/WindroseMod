#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5BaseHttpClient.generated.h"

UCLASS(Blueprintable)
class R5COMMONUTILS_API UR5BaseHttpClient : public UObject {
    GENERATED_BODY()
public:
    UR5BaseHttpClient();

};

