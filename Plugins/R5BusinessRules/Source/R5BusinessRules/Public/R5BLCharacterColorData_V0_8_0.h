#pragma once
#include "CoreMinimal.h"
#include "ER5BLCompositeMeshBodyPartType_V0_8_0.h"
#include "R5BLCharacterColorData_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterColorData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCompositeMeshBodyPartType_V0_8_0 BodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultColor;
    
    FR5BLCharacterColorData_V0_8_0();
};

