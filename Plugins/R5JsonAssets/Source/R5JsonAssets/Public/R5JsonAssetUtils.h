#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5JsonCreateParams.h"
#include "R5JsonAssetUtils.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class R5JSONASSETS_API UR5JsonAssetUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5JsonAssetUtils();

    UFUNCTION(BlueprintCallable)
    static FString ObjectToJsonString(UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static UObject* CreateUObjectFromJson(const FString& JsonString, const FR5JsonCreateParams& Params, bool bCreateUObject);
    
};

