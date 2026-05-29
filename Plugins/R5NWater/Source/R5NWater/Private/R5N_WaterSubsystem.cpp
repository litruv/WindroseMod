#include "R5N_WaterSubsystem.h"

UR5N_WaterSubsystem::UR5N_WaterSubsystem() {
}

void UR5N_WaterSubsystem::UpdateWaterZoneCustomRules(const int32 ID, const FWaterZoneCustomRules& Area) {
}

void UR5N_WaterSubsystem::UpdateWaterLocalBody(const int32 ID, const FTransform& Transform, const FVector& Size, const bool bIndoor) {
}

void UR5N_WaterSubsystem::SetWaterLocalBodyVisible(const int32 ID, const bool Value) {
}

void UR5N_WaterSubsystem::SetWaterDecalsGlobalVisibility(const bool Value) {
}

void UR5N_WaterSubsystem::Regenerate() {
}

UR5N_WaterDecalEffect* UR5N_WaterSubsystem::LoadDecalEffectNode(const TSoftObjectPtr<UR5N_WaterDecalEffectAsset>& Asset, USceneComponent* Node, FName SocketName, const bool bEditorMode) {
    return NULL;
}

UR5N_WaterDecalEffect* UR5N_WaterSubsystem::LoadDecalEffect(const TSoftObjectPtr<UR5N_WaterDecalEffectAsset>& Asset, const FTransform& Transform, const bool bEditorMode) {
    return NULL;
}

bool UR5N_WaterSubsystem::IsWaterLocalBodyVisible(const int32 ID) const {
    return false;
}

bool UR5N_WaterSubsystem::IsReady() const {
    return false;
}

bool UR5N_WaterSubsystem::IsCPUSimulationEnabled() const {
    return false;
}

bool UR5N_WaterSubsystem::GetWaterDecalsGlobalVisibility() const {
    return false;
}

float UR5N_WaterSubsystem::GetSeaLevel() const {
    return 0.0f;
}

void UR5N_WaterSubsystem::FireAndForgetDecalEffect(const TSoftObjectPtr<UR5N_WaterDecalEffectAsset>& Asset, const FTransform& Transform) {
}

void UR5N_WaterSubsystem::EnableCPUSimulation(const bool bActive) {
}

void UR5N_WaterSubsystem::DrawDebugContactSurface(const FVector2f& StartPos, const FVector2f& GridSizeCM, const float StepSizeCM, const float ZOffsetCM) const {
}

void UR5N_WaterSubsystem::DestroyWaterZoneCustomRules(const int32 ID) {
}

void UR5N_WaterSubsystem::DestroyWaterLocalBody(const int32 ID) {
}

int32 UR5N_WaterSubsystem::CreateWaterZoneCustomRules(const FWaterZoneCustomRules& Area) {
    return 0;
}

int32 UR5N_WaterSubsystem::CreateWaterLocalBody(const FTransform& Transform, const FVector& Size, const bool bIndoor) {
    return 0;
}

bool UR5N_WaterSubsystem::ComputeWaterLevel(float& OutHeight, const FVector3f& QueryPos, const int32 ContactDataFlags) const {
    return false;
}

float UR5N_WaterSubsystem::ComputeWaterDepth(const FVector3f& QueryPos, const int32 ContactDataFlags) const {
    return 0.0f;
}

bool UR5N_WaterSubsystem::ComputeFlowVector(FVector2f& OutFlow, const FVector3f& QueryPos, const int32 ContactDataFlags) const {
    return false;
}

bool UR5N_WaterSubsystem::ComputeContactData(float& OutHeight, FVector2f& OutFlow, const FVector3f& QueryPos, const int32 ContactDataFlags) const {
    return false;
}


