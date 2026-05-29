#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveBase -FallbackName=CurveBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "R5CurveVector2D.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UR5CurveVector2D : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[2];
    
    UR5CurveVector2D();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2f GetVectorValue(const float InTime) const;
    
};

