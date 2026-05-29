#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "ER5CollisionShapeType.h"
#include "R5CollisionShape.generated.h"

USTRUCT(BlueprintType)
struct R5COMMONUTILS_API FR5CollisionShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CollisionShapeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfExtent;
    
    FR5CollisionShape();
};

