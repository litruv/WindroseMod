#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "Engine/GameInstance.h"
#include "R5GameInstance.generated.h"

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Engine)
class R5_API UR5GameInstance : public UGameInstance {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStackWalkingWarmup;
    
public:
    UR5GameInstance();

};

