#pragma once
#include "CoreMinimal.h"
#include "R5AuthComponent_Base.h"
#include "R5AuthComponent_ConfirmReuseRefreshToken.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AUTHPROXY_API UR5AuthComponent_ConfirmReuseRefreshToken : public UR5AuthComponent_Base {
    GENERATED_BODY()
public:
    UR5AuthComponent_ConfirmReuseRefreshToken();

    UFUNCTION(BlueprintCallable)
    void Update(bool ReuseRefreshToken);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
};

