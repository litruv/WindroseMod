#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterBodyPartType -FallbackName=ER5BLCharacterBodyPartType
#include "ER5BLCharacterBodyPartType.h"
#include "R5CompositeMeshSkinDecorForBodyPartData.generated.h"

USTRUCT(BlueprintType)
struct FR5CompositeMeshSkinDecorForBodyPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCharacterBodyPartType BodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedDecorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedColorPaletteIndex;
    
    R5_API FR5CompositeMeshSkinDecorForBodyPartData();
};

