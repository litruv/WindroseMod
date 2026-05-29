#pragma once
#include "CoreMinimal.h"
#include "R5AuthComponent_Base.h"
#include "R5AuthComponent_UpdateEmail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AUTHPROXY_API UR5AuthComponent_UpdateEmail : public UR5AuthComponent_Base {
    GENERATED_BODY()
public:
    UR5AuthComponent_UpdateEmail();

    UFUNCTION(BlueprintCallable)
    void Update(const FString& Email, bool ShouldSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmailValid(const FString& Email);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
};

