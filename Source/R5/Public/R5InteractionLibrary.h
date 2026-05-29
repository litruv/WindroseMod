#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5InteractionLibrary.generated.h"

class IR5InteractionTarget;
class UR5InteractionTarget;
class UR5InteractionOption;

UCLASS(Blueprintable)
class R5_API UR5InteractionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5InteractionLibrary();

    UFUNCTION(BlueprintCallable)
    static FGameplayEventData MakeInteractionRequestGameplayEvent(UR5InteractionOption* Option, TScriptInterface<IR5InteractionTarget> Target, const FGameplayTagContainer& InstigatorInteractType, const FString& ItemId);
    
};

