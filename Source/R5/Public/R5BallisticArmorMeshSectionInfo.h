#pragma once
#include "CoreMinimal.h"
#include "R5BallisticArmorMeshSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FR5BallisticArmorMeshSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    R5_API FR5BallisticArmorMeshSectionInfo();
};

