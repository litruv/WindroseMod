#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5VisualMeshSwitcherMeshData.h"
#include "R5VisualMeshSwitcherData.generated.h"

USTRUCT(BlueprintType)
struct FR5VisualMeshSwitcherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShowCmdTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HideCmdTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5VisualMeshSwitcherMeshData> MeshData;
    
    R5_API FR5VisualMeshSwitcherData();
};

