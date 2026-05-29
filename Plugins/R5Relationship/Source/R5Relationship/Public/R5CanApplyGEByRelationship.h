#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectCustomApplicationRequirement -FallbackName=GameplayEffectCustomApplicationRequirement
#include "GameplayEffectCustomApplicationRequirement.h"
#include "R5CanApplyGEByRelationship.generated.h"

UCLASS(Blueprintable)
class R5RELATIONSHIP_API UR5CanApplyGEByRelationship : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RelationshipsToTargets;
    
public:
    UR5CanApplyGEByRelationship();

};

