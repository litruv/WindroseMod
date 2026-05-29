#pragma once
#include "CoreMinimal.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelSimple.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class R5_API UR5MarkerModelSimple : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
public:
    UR5MarkerModelSimple();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetTexture() const;
    
};

