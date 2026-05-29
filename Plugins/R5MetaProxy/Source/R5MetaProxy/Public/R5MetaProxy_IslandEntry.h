#pragma once
#include "CoreMinimal.h"
#include "R5MetaProxy_IslandEntry.generated.h"

class IR5MetaProxy_StartCoop;
class UR5MetaProxy_StartCoop;

USTRUCT(BlueprintType)
struct R5METAPROXY_API FR5MetaProxy_IslandEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendsNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IR5MetaProxy_StartCoop> StartCoopInterface;
    
    FR5MetaProxy_IslandEntry();
};

