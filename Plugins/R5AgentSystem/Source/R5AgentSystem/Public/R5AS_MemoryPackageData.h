#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AS_MemoryPackageData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FR5AS_MemoryPackageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, double> Doubles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Integers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVector> Vectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTransform> Transforms;
    
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TWeakObjectPtr<UObject>> UObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> GameplayTagContainers;
    
    R5AGENTSYSTEM_API FR5AS_MemoryPackageData();
};

