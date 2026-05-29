#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshSuspendType -FallbackName=ER5BLCompositeMeshSuspendType
#include "ER5BLCompositeMeshSuspendType.h"
#include "R5CompositeMeshDataForCharacterSex.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FR5CompositeMeshDataForCharacterSex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCompositeMeshSuspendType, TSoftObjectPtr<USkeletalMesh>> SuspendedVariations;
    
    R5_API FR5CompositeMeshDataForCharacterSex();
};

