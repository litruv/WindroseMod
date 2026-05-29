#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5TaggedVolumeSubsystem.generated.h"

class UR5TaggedVolumeInvokerComponent;

UCLASS(Blueprintable)
class UR5TaggedVolumeSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5TaggedVolumeInvokerComponent*> Invokers;
    
public:
    UR5TaggedVolumeSubsystem();

};

