#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Net -ObjectName=R5NetCm_ServerDescription -FallbackName=R5NetCm_ServerDescription
#include "R5NetCm_ServerDescription.h"
#include "R5BLAccount_FavoriteCoopServer_JoinModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccount_FavoriteCoopServer_JoinModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NetCm_ServerDescription ServerDescription;
    
    FR5BLAccount_FavoriteCoopServer_JoinModel();
};

