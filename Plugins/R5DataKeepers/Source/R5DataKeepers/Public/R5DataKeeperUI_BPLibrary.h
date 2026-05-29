#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5DataKeeperUI_BPLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUI_BPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5DataKeeperUI_BPLibrary();

    UFUNCTION(BlueprintCallable)
    static FString GetAccountNickname(UObject* Wco, const FString& AccountId);
    
};

