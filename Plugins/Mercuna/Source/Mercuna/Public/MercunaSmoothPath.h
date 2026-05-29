#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplinePoint -FallbackName=SplinePoint
#include "Components/SplineComponent.h"
#include "MercunaPath.h"
#include "MercunaSmoothPath.generated.h"

UCLASS(Blueprintable)
class MERCUNA_API UMercunaSmoothPath : public UMercunaPath {
    GENERATED_BODY()
public:
    UMercunaSmoothPath();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangent(const float Length) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSplinePoint> GetSplinePoints(const FTransform& RelativeTo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPosition(const float Length) const;
    
};

