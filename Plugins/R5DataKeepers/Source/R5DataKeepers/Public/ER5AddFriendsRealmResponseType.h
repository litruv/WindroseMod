#pragma once
#include "CoreMinimal.h"
#include "ER5AddFriendsRealmResponseType.generated.h"

UENUM(BlueprintType)
enum class ER5AddFriendsRealmResponseType : uint8 {
    INVALID_REGION,
    INVALID_FRIEND_ID,
};

