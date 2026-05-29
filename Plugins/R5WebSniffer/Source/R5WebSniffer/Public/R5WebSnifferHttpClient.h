#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5BaseHttpClient -FallbackName=R5BaseHttpClient
#include "R5BaseHttpClient.h"
#include "R5WebSnifferHttpClient.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UR5WebSnifferHttpClient : public UR5BaseHttpClient {
    GENERATED_BODY()
public:
    UR5WebSnifferHttpClient();

};

