#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "R5WorldSubsystem.h"
#include "R5TeleportSubsystem.generated.h"

class IR5TeleportEntityInterface;
class UR5TeleportEntityInterface;

UCLASS(Blueprintable)
class R5_API UR5TeleportSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, TScriptInterface<IR5TeleportEntityInterface>> OutTeleportPoints;
    
public:
    UR5TeleportSubsystem();

};

