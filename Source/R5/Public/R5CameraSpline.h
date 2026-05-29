#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveFloat -FallbackName=InterpCurveFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5SymmetricSplineComponent.h"
#include "R5CameraSpline.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CameraSpline : public UR5SymmetricSplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OrbitStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrbitNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraFov;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAdditionalCameraFovBySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultUpCameraAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDownCameraAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraMovementCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMaxCameraSpringLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultRollCameraFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPitchCameraFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPitchOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixedPointMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedMovementCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedPointStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineInterpolationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePlaneZFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDifferentInterpolationMultiplierZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationMultiplierZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOwnerYawFollowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PitchOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalFovMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalFovMaxSpeed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat CameraFovCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat AdditionalCameraFovBySpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat UpCameraAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat DownCameraAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat CameraMovementCoefficientCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat MaxCameraSpringLengthCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat RollCameraFollowingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat PitchCameraFollowingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat PitchOffsetMultiplierCurve;
    
public:
    UR5CameraSpline(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpCameraAngleAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRollCameraFollowingAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeTangentAtSplineInputKey(float Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeNormalAtSplineInputKey(float Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeLocationAtSplineInputKey(float Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchOffsetMultiplierAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchCameraFollowingAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintPure)
    float GetNewPercentageByMovement(float OldPercentage, double DeltaMovement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxCameraSpringLengthAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKeyAtSplinePercentageWithFixedPoints(float Percentage, float OldKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownCameraAngleAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraMovementCoefficientAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraFovAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdditionalCameraFovAtSplineInputKey(float InKey) const;
    
};

