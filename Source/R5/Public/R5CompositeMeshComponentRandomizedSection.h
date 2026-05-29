#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterSex -FallbackName=ER5BLCharacterSex
#include "ER5BLCharacterSex.h"
#include "R5CompositeMeshGroupForBodySex.h"
#include "R5CompositeMeshComponentRandomizedSection.generated.h"

USTRUCT(BlueprintType)
struct FR5CompositeMeshComponentRandomizedSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCharacterSex, FR5CompositeMeshGroupForBodySex> CompositeMeshGroupsByBodySex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GroupCategoryId;
    
    R5_API FR5CompositeMeshComponentRandomizedSection();
};

