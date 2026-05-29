#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5VisualMeshSwitcherData.h"
#include "R5VisualMeshSwitcherParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5VisualMeshSwitcherParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5VisualMeshSwitcherData> MeshesData;
    
    UR5VisualMeshSwitcherParams();

};

