#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMTaskData_RemoveActorsByClass.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMTaskData_RemoveActorsByClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerZoneCollisionContextTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ClassesToRemove;
    
    FR5AMTaskData_RemoveActorsByClass();
};

