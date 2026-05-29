#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "R5Ability.h"
#include "R5Ability_IgnoreClientMovementCorrection.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_IgnoreClientMovementCorrection : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery IgnoreClientCorrectionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ServerAcceptClientAuthoritativePositionQuery;
    
public:
    UR5Ability_IgnoreClientMovementCorrection();

};

