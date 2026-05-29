#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "Camera/CameraComponent.h"
#include "R5CameraPostProcessHandle.h"
#include "R5CameraComponentBase.generated.h"

class UR5CameraPostProcess;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5CAMERA_API UR5CameraComponentBase : public UCameraComponent {
    GENERATED_BODY()
public:
    UR5CameraComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveCameraPostProcess(FR5CameraPostProcessHandle InHandle);
    
    UFUNCTION(BlueprintCallable)
    FR5CameraPostProcessHandle AddCameraPostProcess(const TSoftObjectPtr<UR5CameraPostProcess>& InPostProcess);
    
};

