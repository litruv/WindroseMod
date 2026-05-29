#pragma once
#include "CoreMinimal.h"
#include "R5WorldSubsystem.h"
#include "R5IslandManager.generated.h"

class AR5ChestActor;

UCLASS(Blueprintable)
class R5_API UR5IslandManager : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5ChestActor*> ChestContainers;
    
public:
    UR5IslandManager();

};

