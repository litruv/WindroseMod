#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshBodyPartType -FallbackName=ER5BLCompositeMeshBodyPartType
#include "ER5BLCompositeMeshBodyPartType.h"
#include "ER5MeshColorIndexType.h"
#include "R5MeshColorIndexData.h"
#include "R5CompositeMeshColorGroupData.generated.h"

USTRUCT(BlueprintType)
struct FR5CompositeMeshColorGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5MeshColorIndexType, FR5MeshColorIndexData> ColorIndexesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ER5BLCompositeMeshBodyPartType> BodyPartSlots;
    
    R5_API FR5CompositeMeshColorGroupData();
};

