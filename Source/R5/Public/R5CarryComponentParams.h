#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5CarryComponentAttachData.h"
#include "Templates/SubclassOf.h"
#include "R5CarryComponentParams.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5CarryComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CarryComponentAttachData AttachData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CarryTypeGEClass;
    
    UR5CarryComponentParams();

};

