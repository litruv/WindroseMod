#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioComponent.h"
#include "R5ScenarioComponent_ForPlayer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ScenarioComponent_ForPlayer : public UR5ScenarioComponent {
    GENERATED_BODY()
public:
    UR5ScenarioComponent_ForPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReceiveQuestUpdate(const FSoftObjectPath QuestParamsPath);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendUIActionToServer(const FString& ScenarioID, const FGuid& NodeID, FName ActionName, bool IsSkipped);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendEventToServer(const FGameplayTag& EventTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendDialogReplyToServer(const FString& ScenarioID, const FGuid& NodeID, bool WasChosen, bool IsSkipped);
    
};

