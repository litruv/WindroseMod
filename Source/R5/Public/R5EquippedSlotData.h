#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCompositeMeshBodyPartType -FallbackName=ER5BLCompositeMeshBodyPartType
#include "ER5BLCompositeMeshBodyPartType.h"
#include "CompositeMeshColorData.h"
#include "ER5SignificanceLevel.h"
#include "R5CompositeMeshData.h"
#include "R5EquippedAttachmentData.h"
#include "R5EquippedSlotData.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FR5EquippedSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CompositeMeshData Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLCompositeMeshBodyPartType BodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGearMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EquippedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel EnableTickSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel UnhideSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenBySignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMeshComponent*, FR5EquippedAttachmentData> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompositeMeshColorData ColorData;
    
    R5_API FR5EquippedSlotData();
};

