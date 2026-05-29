#pragma once
#include "CoreMinimal.h"
#include "R5ActorClassChanceStruct.h"
#include "R5EncounterAction.h"
#include "R5EncounterAction_SpawnActor.generated.h"

class UR5EncounterTransformProvider;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterAction_SpawnActor : public UR5EncounterAction {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ActorClassChanceStruct> ActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5EncounterTransformProvider* TransformProvider;
    
public:
    UR5EncounterAction_SpawnActor();

};

