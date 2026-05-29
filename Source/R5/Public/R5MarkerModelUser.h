#pragma once
#include "CoreMinimal.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelUser.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelUser : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIconChanged, TSoftObjectPtr<UTexture2D>, Icon);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIconChanged OnIconChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Icons;
    
    UR5MarkerModelUser();

    UFUNCTION(BlueprintCallable)
    void SetIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetSelectedIcon() const;
    
    UFUNCTION(BlueprintCallable)
    void CustomizeMarkerRequest();
    
};

