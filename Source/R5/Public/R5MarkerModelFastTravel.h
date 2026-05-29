#pragma once
#include "CoreMinimal.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelFastTravel.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class R5_API UR5MarkerModelFastTravel : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSourceStatusUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSourceStatusUpdated OnSourceStatusUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReceiver;
    
public:
    UR5MarkerModelFastTravel();

    UFUNCTION(BlueprintCallable)
    void TravelToDestination();
    
};

