#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCapture2D -FallbackName=SceneCapture2D
#include "Engine/SceneCapture2D.h"
#include "R5MapSceneCapture.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5MapSceneCapture : public ASceneCapture2D {
    GENERATED_BODY()
public:
    AR5MapSceneCapture(const FObjectInitializer& ObjectInitializer);

};

