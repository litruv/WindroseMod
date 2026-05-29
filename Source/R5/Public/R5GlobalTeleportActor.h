#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5TeleportEntityInterface.h"
#include "R5GlobalTeleportActor.generated.h"

class UR5PrimitiveInteractionTargetComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GlobalTeleportActor : public AActor, public IR5TeleportEntityInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* InteractionTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ThisTeleportGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConnectedTeleportGuid;
    
public:
    AR5GlobalTeleportActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

