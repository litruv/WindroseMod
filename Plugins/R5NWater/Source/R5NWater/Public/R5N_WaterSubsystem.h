#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "WaterZoneCustomRules.h"
#include "R5N_WaterSubsystem.generated.h"

class AR5WaterActor;
class UR5N_WaterDecalEffect;
class UR5N_WaterDecalEffectAsset;
class USceneComponent;

UCLASS(Blueprintable)
class R5NWATER_API UR5N_WaterSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AR5WaterActor> Actor;
    
public:
    UR5N_WaterSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateWaterZoneCustomRules(const int32 ID, const FWaterZoneCustomRules& Area);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWaterLocalBody(const int32 ID, const FTransform& Transform, const FVector& Size, const bool bIndoor);
    
    UFUNCTION(BlueprintCallable)
    void SetWaterLocalBodyVisible(const int32 ID, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWaterDecalsGlobalVisibility(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void Regenerate();
    
    UFUNCTION(BlueprintCallable)
    UR5N_WaterDecalEffect* LoadDecalEffectNode(const TSoftObjectPtr<UR5N_WaterDecalEffectAsset>& Asset, USceneComponent* Node, FName SocketName, const bool bEditorMode);
    
    UFUNCTION(BlueprintCallable)
    UR5N_WaterDecalEffect* LoadDecalEffect(const TSoftObjectPtr<UR5N_WaterDecalEffectAsset>& Asset, const FTransform& Transform, const bool bEditorMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaterLocalBodyVisible(const int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCPUSimulationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWaterDecalsGlobalVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeaLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void FireAndForgetDecalEffect(const TSoftObjectPtr<UR5N_WaterDecalEffectAsset>& Asset, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void EnableCPUSimulation(const bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DrawDebugContactSurface(const FVector2f& StartPos, const FVector2f& GridSizeCM, const float StepSizeCM, const float ZOffsetCM) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyWaterZoneCustomRules(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyWaterLocalBody(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateWaterZoneCustomRules(const FWaterZoneCustomRules& Area);
    
    UFUNCTION(BlueprintCallable)
    int32 CreateWaterLocalBody(const FTransform& Transform, const FVector& Size, const bool bIndoor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ComputeWaterLevel(float& OutHeight, const FVector3f& QueryPos, const int32 ContactDataFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeWaterDepth(const FVector3f& QueryPos, const int32 ContactDataFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ComputeFlowVector(FVector2f& OutFlow, const FVector3f& QueryPos, const int32 ContactDataFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ComputeContactData(float& OutHeight, FVector2f& OutFlow, const FVector3f& QueryPos, const int32 ContactDataFlags) const;
    
};

