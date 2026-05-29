#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5SetRegionAsync.generated.h"

class UObject;
class UR5SetRegionAsync;

UCLASS(Blueprintable)
class R5AUTHPROXY_API UR5SetRegionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRegionSet);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegionSet OnRegionSet;
    
    UR5SetRegionAsync();

    UFUNCTION(BlueprintCallable)
    static UR5SetRegionAsync* SetRegionAsync(UObject* Outer, const FString& Region);
    
};

