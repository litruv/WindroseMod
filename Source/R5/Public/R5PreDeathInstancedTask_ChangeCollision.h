#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
#include "R5PreDeathInstancedTask.h"
#include "R5PreDeathInstancedTask_ChangeCollision.generated.h"

class UR5ChangeCollisionPresetTask;

UCLASS(Blueprintable, EditInlineNew)
class UR5PreDeathInstancedTask_ChangeCollision : public UR5PreDeathInstancedTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ChangeCollisionPresetTask* CollisionPresetTask;
    
public:
    UR5PreDeathInstancedTask_ChangeCollision();

};

