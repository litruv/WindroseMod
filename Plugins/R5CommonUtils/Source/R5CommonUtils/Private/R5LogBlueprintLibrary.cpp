#include "R5LogBlueprintLibrary.h"

UR5LogBlueprintLibrary::UR5LogBlueprintLibrary() {
}

bool UR5LogBlueprintLibrary::R5IsDebugCategoryEnabled(const FString& Category) {
    return false;
}

void UR5LogBlueprintLibrary::R5DebugText(const UObject* WorldContextObject, const FText Text, const FString& Category, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration, const FName Key) {
}

void UR5LogBlueprintLibrary::R5DebugString(const UObject* WorldContextObject, const FString& String, const FString& Category, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration, const FName Key) {
}

void UR5LogBlueprintLibrary::R5CheckBP(bool bCondition, const FString& Message, ER5CheckResult& Result) {
}


