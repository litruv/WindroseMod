#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "Subsystems/GameInstanceSubsystem.h"
#include "R5EcCollector.generated.h"

UCLASS(Blueprintable)
class UR5EcCollector : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UR5EcCollector();

private:
    UFUNCTION(BlueprintCallable)
    void SendEvents();
    
    UFUNCTION(BlueprintCallable)
    void OnNoEntryHappens(const FString& Function, const FString& UserMessage, const FString& File, int32 Line, const FString& Callstack);
    
    UFUNCTION(BlueprintCallable)
    void OnErrorHappens(const FString& Function, const FString& Message, const FString& File, int32 Line);
    
    UFUNCTION(BlueprintCallable)
    void OnEnsureHappens(const FString& Function, const FString& Condition, const FString& UserMessage, const FString& File, int32 Line, const FString& Callstack);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckHappens(const FString& Function, const FString& Condition, const FString& UserMessage, const FString& File, int32 Line, const FString& Callstack);
    
};

