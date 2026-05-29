#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5BaseHttpClient -FallbackName=R5BaseHttpClient
#include "R5BaseHttpClient.h"
#include "R5CaHttpClient.generated.h"

UCLASS(Blueprintable)
class UR5CaHttpClient : public UR5BaseHttpClient {
    GENERATED_BODY()
public:
    UR5CaHttpClient();

};

