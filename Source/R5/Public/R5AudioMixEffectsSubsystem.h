#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5AudioMixEffectsSubsystem.generated.h"

class USoundControlBus;
class USoundControlBusMix;

UCLASS(Blueprintable)
class R5_API UR5AudioMixEffectsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundControlBusMix* UserMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundControlBus*> ControlBusMap;
    
public:
    UR5AudioMixEffectsSubsystem();

};

