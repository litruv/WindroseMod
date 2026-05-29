#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Math/Color.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ER5CheckResult.h"
#include "R5LogBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UR5LogBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UR5LogBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool R5IsDebugCategoryEnabled(const FString& Category);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void R5DebugText(const UObject* WorldContextObject, const FText Text, const FString& Category, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration, const FName Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void R5DebugString(const UObject* WorldContextObject, const FString& String, const FString& Category, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration, const FName Key);
    
    UFUNCTION(BlueprintCallable)
    static void R5CheckBP(bool bCondition, const FString& Message, ER5CheckResult& Result);
    
};

