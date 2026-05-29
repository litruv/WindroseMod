#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5SpawnAttachingDamageableActorAbility.generated.h"

class AR5AttachingDamageableActor;
class UR5SpawnAttachingDamageableActorAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5SpawnAttachingDamageableActorAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SpawnAttachingDamageableActorAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5AttachingDamageableActor*> SpawnedActors;
    
public:
    UR5SpawnAttachingDamageableActorAbility();

};

