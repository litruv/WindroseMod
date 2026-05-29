#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterSex -FallbackName=ER5BLCharacterSex
#include "ER5BLCharacterSex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshBodyPartType -FallbackName=ER5BLCompositeMeshBodyPartType
#include "ER5BLCompositeMeshBodyPartType.h"
#include "ER5CompositeMeshMorphPrefixType.h"
#include "ER5SignificanceLevel.h"
#include "R5CompositeMeshAttachmentData.h"
#include "R5CompositeMeshDataForCharacterSex.h"
#include "R5CompositeMeshData.generated.h"

USTRUCT(BlueprintType)
struct FR5CompositeMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CompositeMeshMorphPrefixType AddMorphTargetPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MeshUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCompositeMeshBodyPartType MeshBodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCharacterSex, FR5CompositeMeshDataForCharacterSex> SexVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CompositeMeshAttachmentData> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel EnableTickSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel UnhideSignificanceLevel;
    
    R5_API FR5CompositeMeshData();
};

