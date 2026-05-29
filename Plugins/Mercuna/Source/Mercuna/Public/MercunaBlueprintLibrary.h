#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MercunaUsageTypes.h"
#include "MercunaBlueprintLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class MERCUNA_API UMercunaBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMercunaBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDebugActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void MercunaLog(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void MercunaFlushLog();
    
    UFUNCTION(BlueprintCallable)
    static bool HasUsageType(FMercunaUsageTypes UsageTypes, FName UsageTypeName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearDebugActor();
    
};

