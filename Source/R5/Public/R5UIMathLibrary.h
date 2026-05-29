#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5UIMathLibrary.generated.h"

UCLASS(Blueprintable)
class R5_API UR5UIMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5UIMathLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D SafeDivide2D(const FVector2D& v1, const FVector2D& v2);
    
    UFUNCTION(BlueprintPure)
    static bool PointInRange(const FVector2D& Point, const FFloatInterval& Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Lerp2D(const FVector2D& v1, const FVector2D& v2, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRectsIntersecting(const FVector2D& RangeX1, const FVector2D& RangeY1, const FVector2D& RangeX2, const FVector2D& RangeY2);
    
    UFUNCTION(BlueprintCallable)
    static float GetAzimuthToTarget(const FVector& OriginPosition, const FRotator& OriginRotation, const FVector& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D Clamp2D(const FVector2D& Vector, const FVector2D& RangeA, const FVector2D& RangeB);
    
};

