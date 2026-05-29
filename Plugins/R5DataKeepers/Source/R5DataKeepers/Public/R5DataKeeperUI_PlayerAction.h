#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5DataKeeperUI_PlayerAction.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUI_PlayerAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleted, const FString&, ErrorStr);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompleted OnCompleted;
    
    UR5DataKeeperUI_PlayerAction();

};

