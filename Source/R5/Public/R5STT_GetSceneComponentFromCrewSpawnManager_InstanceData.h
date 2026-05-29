#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5STT_GetSceneComponentFromCrewSpawnManager_InstanceData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct R5_API FR5STT_GetSceneComponentFromCrewSpawnManager_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContextTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    FR5STT_GetSceneComponentFromCrewSpawnManager_InstanceData();
};

