#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLQuestFilterType -FallbackName=ER5BLQuestFilterType
#include "ER5BLQuestFilterType.h"
#include "R5UIObservedQuestData.h"
#include "R5UIQuestsGroupObserver.generated.h"

class UR5BLQuestParams;
class UR5UIQuestsGroupObserver;

UCLASS(Blueprintable)
class R5_API UR5UIQuestsGroupObserver : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnQuestStateChanged, const TArray<FR5UIObservedQuestData>&, UpdatedQuestsData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnQuestStateChanged OnQuestStateChanged;
    
    UR5UIQuestsGroupObserver();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIQuestsGroupObserver* CreateQuestsGroupObserverByParams(UObject* WorldContextObject, const TArray<TSoftObjectPtr<UR5BLQuestParams>>& QuestsToObserve);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIQuestsGroupObserver* CreateQuestsGroupObserverByFilter(UObject* WorldContextObject, const FGameplayTagContainer& Filter, int32 QuestState, ER5BLQuestFilterType FilterType);
    
};

