#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5ComfortManagerSubsystem.generated.h"

class AActor;
class UR5ShelterCheckSetup;

UCLASS(Blueprintable)
class R5_API UR5ComfortManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UR5ComfortManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    bool CheckShelter(AActor* Actor, const UR5ShelterCheckSetup* CheckSetup);
    
};

