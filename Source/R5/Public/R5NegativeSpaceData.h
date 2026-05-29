#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5NegativeSpaceData.generated.h"

class AR5NegativeSpaceSceneActor;

USTRUCT(BlueprintType)
struct FR5NegativeSpaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5NegativeSpaceSceneActor> SceneClass;
    
    R5_API FR5NegativeSpaceData();
};

