#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "Math/Quat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5BuildingAbilitySnappingMode.h"
#include "R5BuildingConstructionContext.generated.h"

class UR5BuildingBrush;

UCLASS(Blueprintable)
class R5_API UR5BuildingConstructionContext : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSnappingModeDelegate, ER5BuildingAbilitySnappingMode, SnappingMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRotationStepDelegate, int32, StepValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRestrictionsDelegate, const FGameplayTagContainer&, Restrictions);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuatDelegate, const FQuat&, Quaternion);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOffsetDelegate, const FVector&, Offset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildingStrategyChanged, bool, bNeighborsStrategy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBrushDelegate, UR5BuildingBrush*, Brush);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushDelegate OnBrushChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuatDelegate OnBrushQuaternionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOffsetDelegate OnBrushShiftChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotationStepDelegate OnBrushRotationStepDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnappingModeDelegate OnSnappingModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingStrategyChanged OnBuildingStrategyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestrictionsDelegate OnRestrictionsChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingBrush* Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox PhysicsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat BrushQuaternion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector BrushYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat BaseBrushRotationQuat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RotationStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ER5BuildingAbilitySnappingMode SnappingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Restrictions;
    
public:
    UR5BuildingConstructionContext();

    UFUNCTION(BlueprintCallable)
    void UpdateBrushRandomRotation();
    
    UFUNCTION(BlueprintCallable)
    void ShiftBrushOffset(const FVector& OffsetDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetSnappingMode(ER5BuildingAbilitySnappingMode NewSnappingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationStep(int32 StepValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(UR5BuildingBrush* NewBrush);
    
    UFUNCTION(BlueprintCallable)
    void RotateBrush(const FQuat& RotationQuaternion);
    
    UFUNCTION(BlueprintCallable)
    void ResetRestrictions();
    
    UFUNCTION(BlueprintCallable)
    void ResetBrushOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5BuildingAbilitySnappingMode GetSnappingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRotationStep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRestrictions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetPhysicsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBrushYawOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetBrushQuaternion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BuildingBrush* GetBrush() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRestrictions(const FGameplayTagContainer& InRestrictions);
    
};

