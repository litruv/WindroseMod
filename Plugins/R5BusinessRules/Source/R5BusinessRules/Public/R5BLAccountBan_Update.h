#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLAccountBan_Update.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountBan_Update {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId BanId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ExpireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MessageForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NotesForGameAdmin;
    
    FR5BLAccountBan_Update();
};

