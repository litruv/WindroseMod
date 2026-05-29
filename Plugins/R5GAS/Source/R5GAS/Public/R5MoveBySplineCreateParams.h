#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5MoveBySplineCreateParams.generated.h"

class AActor;
class UCurveVector;

UCLASS(Blueprintable)
class R5GAS_API UR5MoveBySplineCreateParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SplineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* MiddlePointByHeightDifCurve;
    
    UR5MoveBySplineCreateParams();

};

