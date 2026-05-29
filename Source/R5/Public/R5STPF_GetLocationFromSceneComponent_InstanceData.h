#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5STPF_GetLocationFromSceneComponent_InstanceData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct R5_API FR5STPF_GetLocationFromSceneComponent_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FR5STPF_GetLocationFromSceneComponent_InstanceData();
};

