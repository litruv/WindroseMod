#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability_InteractOption_Base.h"
#include "R5Ability_InteractOption_ExternalInventory.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_ExternalInventory : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractionTag;
    
public:
    UR5Ability_InteractOption_ExternalInventory();

};

