#pragma once
#include "CoreMinimal.h"
#include "R5BallisticArmorInstance.generated.h"

class UPhysicalMaterial;
class UR5MeshVertexColorData;

USTRUCT(BlueprintType)
struct FR5BallisticArmorInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeshVertexColorData* VertexColorData;
    
    R5_API FR5BallisticArmorInstance();
};

