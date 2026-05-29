#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTrackerRegular -FallbackName=R5ScenarioTrackerRegular
#include "R5ScenarioTrackerRegular.h"
#include "R5ScenarioTracker_PoiCharactersAroundChildObject.generated.h"

class AActor;
class UR5ScenarioNode;
class UR5ScenarioTracker_PoiCharactersAroundChildObject;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_PoiCharactersAroundChildObject : public UR5ScenarioTrackerRegular {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WriteAsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChildTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceSquared;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ChildActor;
    
public:
    UR5ScenarioTracker_PoiCharactersAroundChildObject();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_PoiCharactersAroundChildObject* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer CharacterTags, FGameplayTag WriteToBlackboardAs, FGameplayTag ChildObjectTag, double Distance);
    
};

