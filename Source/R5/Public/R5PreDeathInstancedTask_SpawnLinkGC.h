#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5PreDeathInstancedTask.h"
#include "R5PreDeathInstancedTask_SpawnLinkGC.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5PreDeathInstancedTask_SpawnLinkGC : public UR5PreDeathInstancedTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TrackedGETag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GCTag;
    
public:
    UR5PreDeathInstancedTask_SpawnLinkGC();

};

