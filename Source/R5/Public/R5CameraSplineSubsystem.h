#pragma once
#include "CoreMinimal.h"
#include "R5WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "R5CameraSplineSubsystem.generated.h"

class AR5SplineContainer;

UCLASS(Blueprintable)
class R5_API UR5CameraSplineSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AR5SplineContainer>, AR5SplineContainer*> SplineActors;
    
public:
    UR5CameraSplineSubsystem();

};

