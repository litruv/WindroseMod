#include "R5CameraComponentBase.h"

UR5CameraComponentBase::UR5CameraComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UR5CameraComponentBase::RemoveCameraPostProcess(FR5CameraPostProcessHandle InHandle) {
}

FR5CameraPostProcessHandle UR5CameraComponentBase::AddCameraPostProcess(const TSoftObjectPtr<UR5CameraPostProcess>& InPostProcess) {
    return FR5CameraPostProcessHandle{};
}


