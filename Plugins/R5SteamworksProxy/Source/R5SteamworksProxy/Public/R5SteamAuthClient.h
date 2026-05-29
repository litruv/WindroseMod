#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "Misc/Timespan.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5SteamAuthClient.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5STEAMWORKSPROXY_API UR5SteamAuthClient : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteamCallbacksTimerRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackendAuthIdentityName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan Timeout;
    
public:
    UR5SteamAuthClient();

};

