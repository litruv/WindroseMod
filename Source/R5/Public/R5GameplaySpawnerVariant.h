#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5SoftAssetPath -FallbackName=R5SoftAssetPath
#include "R5SoftAssetPath.h"
#include "R5GameplaySpawnerVariant.generated.h"

class UR5GameplaySpawnerVariantCustomData;
class UR5SpawnerMutator;

USTRUCT(BlueprintType)
struct R5_API FR5GameplaySpawnerVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5SoftAssetPath> Assets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5SpawnerMutator*> Mutators;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GameplaySpawnerVariantCustomData* CustomData;
    
public:
    FR5GameplaySpawnerVariant();
};

