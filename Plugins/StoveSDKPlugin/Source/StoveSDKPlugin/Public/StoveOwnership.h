#pragma once
#include "CoreMinimal.h"
#include "StoveOwnership.generated.h"

USTRUCT(BlueprintType)
struct FStoveOwnership {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwnershipCode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PurchaseDate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 MemberNo;
    
    STOVESDKPLUGIN_API FStoveOwnership();
};

