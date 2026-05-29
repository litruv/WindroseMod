#pragma once
#include "CoreMinimal.h"
#include "R5MeleeWeaponVisualTagToFXData.h"
#include "R5SkeletalMeshOptimizationData.h"
#include "Templates/SubclassOf.h"
#include "R5MeleeWeaponVisualData.generated.h"

class UAnimInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct R5_API FR5MeleeWeaponVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SkeletalMeshOptimizationData OptimizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachToSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HoldSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MeleeWeaponVisualTagToFXData> TagToFXData;
    
    FR5MeleeWeaponVisualData();
};

