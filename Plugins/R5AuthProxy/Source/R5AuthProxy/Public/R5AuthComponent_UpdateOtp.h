#pragma once
#include "CoreMinimal.h"
#include "R5AuthComponent_Base.h"
#include "R5AuthComponent_UpdateOtp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AUTHPROXY_API UR5AuthComponent_UpdateOtp : public UR5AuthComponent_Base {
    GENERATED_BODY()
public:
    UR5AuthComponent_UpdateOtp();

    UFUNCTION(BlueprintCallable)
    void Update(bool ReenterEmail, const FString& OTP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOtpValid(int32 OTP) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOtp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
};

