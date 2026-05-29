#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability_InteractOption_Base.h"
#include "R5Ability_InteractOption_CraftStation.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_CraftStation : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CraftType;
    
public:
    UR5Ability_InteractOption_CraftStation();

};

