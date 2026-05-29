#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5StoveProxySystem.generated.h"

class UStoveSDKObject;

UCLASS(Blueprintable)
class R5STOVEPROXY_API UR5StoveProxySystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStoveSDKObject* StoveSDKObject;
    
public:
    UR5StoveProxySystem();

};

