#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "Misc/DateTime.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Net -ObjectName=ER5CmNet_WorldPresetType -FallbackName=ER5CmNet_WorldPresetType
#include "ER5CmNet_WorldPresetType.h"
#include "R5CoopProxyUi_WorldDescriptionSettings.h"
#include "R5CoopProxyUi_WorldDescription.generated.h"

USTRUCT(BlueprintType)
struct R5COOPPROXY_API FR5CoopProxyUi_WorldDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId WorldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CreationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CmNet_WorldPresetType WorldPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CoopProxyUi_WorldDescriptionSettings WorldSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Dev_CommonIslandId;
    
    FR5CoopProxyUi_WorldDescription();
};

