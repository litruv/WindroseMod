#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "R5CommonFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CommonFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5CommonFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevOnlineEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevOfflineEnabled();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTransformBasedIndex(FTransform Transform, int32 NumElements);
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& String);
    
};

