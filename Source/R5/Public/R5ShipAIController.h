#pragma once
#include "CoreMinimal.h"
#include "R5AIController.h"
#include "R5ShipAIController.generated.h"

class UR5AIShipParams;
class UR5CharacterFsmComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5ShipAIController : public AR5AIController {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CharacterFsmComponent* FsmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5AIShipParams> Params;
    
public:
    AR5ShipAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnAliveStatusChange(bool Status);
    
};

