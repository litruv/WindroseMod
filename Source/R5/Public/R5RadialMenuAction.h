#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5RadialSlotData.h"
#include "R5RadialMenuAction.generated.h"

class UHFSMState;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5RadialMenuAction : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHFSMState* State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RadialSlotData RadialSlotData;
    
public:
    UR5RadialMenuAction();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FR5RadialSlotData GetSlotData() const;
    
};

