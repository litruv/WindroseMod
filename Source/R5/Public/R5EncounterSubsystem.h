#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5PlayerEncounterData.h"
#include "R5EncounterSubsystem.generated.h"

class AR5PlayerController;

UCLASS(Blueprintable)
class R5_API UR5EncounterSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AR5PlayerController>, FR5PlayerEncounterData> PlayerEncountersMap;
    
public:
    UR5EncounterSubsystem();

};

