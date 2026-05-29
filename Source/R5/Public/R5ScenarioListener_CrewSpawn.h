#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioListener_CrewListener.h"
#include "R5ScenarioListener_CrewSpawn.generated.h"

class AR5AICharacter;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_CrewSpawn : public UR5ScenarioListener_CrewListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrewmemberType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5AICharacter* Character;
    
    UR5ScenarioListener_CrewSpawn();

private:
    UFUNCTION(BlueprintCallable)
    void OnSpawn(const FGameplayTag& InCrewmemberType, AR5AICharacter* InCharacter);
    
};

