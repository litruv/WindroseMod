#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5EncounterStateStep.h"
#include "R5EncounterInstanceStateData.generated.h"

class AActor;
class UObject;
class UR5EncounterCustomData;
class UR5EncounterInstance;

USTRUCT(BlueprintType)
struct FR5EncounterInstanceStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentStateTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5EncounterStateStep CurrentStateStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5EncounterInstance> Encounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, UR5EncounterCustomData*> CustomData;
    
    R5_API FR5EncounterInstanceStateData();
};

