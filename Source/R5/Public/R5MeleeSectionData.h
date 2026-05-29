#pragma once
#include "CoreMinimal.h"
#include "R5MeleeSectionData.generated.h"

class UR5MeleeSectionMovesetParams;
class UR5MeleeSectionSpecParams;

USTRUCT(BlueprintType)
struct R5_API FR5MeleeSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeSectionMovesetParams* MovesetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeSectionSpecParams* SpecParams;
    
    FR5MeleeSectionData();
};

