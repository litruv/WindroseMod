#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5ContextualSpawnPointPreview.generated.h"

class UR5ContextualSpawnerParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ContextualSpawnPointPreview : public USceneComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ContextualSpawnerParams> Params;
    
public:
    UR5ContextualSpawnPointPreview(const FObjectInitializer& ObjectInitializer);

};

