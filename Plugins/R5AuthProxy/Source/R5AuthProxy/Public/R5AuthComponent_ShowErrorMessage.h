#pragma once
#include "CoreMinimal.h"
#include "R5AuthComponent_Base.h"
#include "R5AuthComponent_ShowErrorMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AUTHPROXY_API UR5AuthComponent_ShowErrorMessage : public UR5AuthComponent_Base {
    GENERATED_BODY()
public:
    UR5AuthComponent_ShowErrorMessage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastStatusCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLastResponseDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastResponseCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastErrorMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetErrorCode() const;
    
    UFUNCTION(BlueprintCallable)
    void Done();
    
};

