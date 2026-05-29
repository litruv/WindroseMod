#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "Components/SplineComponent.h"
#include "R5SymmetricSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SymmetricSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSymmetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OvalRadiusX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OvalRadiusY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegmentsPerHalf;
    
public:
    UR5SymmetricSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentageAtSplineInputKey(float Key) const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentageAtDistanceAlongSpline(double Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKeyAtSplinePercentage(float Percentage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClosestKeyToWorldPoint(const FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClampedKey(float Key) const;
    
    UFUNCTION(BlueprintPure)
    double GetClampedDistance(double Distance) const;
    
};

