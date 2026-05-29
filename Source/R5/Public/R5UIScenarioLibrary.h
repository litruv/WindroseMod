#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLQuestFilterType -FallbackName=ER5BLQuestFilterType
#include "ER5BLQuestFilterType.h"
#include "ER5ScenarioQuestState.h"
#include "R5UIScenarioLibrary.generated.h"

class UObject;
class UR5BLQuestParams;

UCLASS(Blueprintable)
class R5_API UR5UIScenarioLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5UIScenarioLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendScenarioEvent(UObject* WorldContextObject, const FGameplayTag& EventTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReceiveQuestUpdate(UObject* WorldContextObject, const TSoftObjectPtr<UR5BLQuestParams>& Quest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ER5ScenarioQuestState GetQuestState(UObject* WorldContextObject, const TSoftObjectPtr<UR5BLQuestParams>& Quest);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<TSoftObjectPtr<UR5BLQuestParams>> GetQuestsParamsByFilter(UObject* WorldContextObject, const FGameplayTagContainer& Filter, int32 QuestState, ER5BLQuestFilterType FilterType, bool bSortByOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ContainsUpdatedQuestForFilter(UObject* WorldContextObject, const FGameplayTagContainer& Filter, int32 QuestState, ER5BLQuestFilterType FilterType);
    
};

