#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_PreDeath.generated.h"

class UR5CharacterFsmComponent;
class UR5PreDeathAbilityParams;
class UR5PreDeathInstancedTask;

UCLASS(Blueprintable)
class R5_API UR5Ability_PreDeath : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PreDeathAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CharacterFsmComponent* CharacterFsmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UR5PreDeathInstancedTask*> CurrentTasks;
    
public:
    UR5Ability_PreDeath();

};

