#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugCameraController -FallbackName=DebugCameraController
#include "Engine/DebugCameraController.h"
#include "R5DebugCameraController.generated.h"

UCLASS(Blueprintable, NoExport)
class AR5DebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertPitch;
    
public:
    AR5DebugCameraController(const FObjectInitializer& ObjectInitializer);

};

