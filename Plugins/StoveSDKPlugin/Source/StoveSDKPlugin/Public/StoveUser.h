#pragma once
#include "CoreMinimal.h"
#include "StoveUser.generated.h"

USTRUCT(BlueprintType)
struct FStoveUser {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 MemberNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Nickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameUserId;
    
    STOVESDKPLUGIN_API FStoveUser();
};

