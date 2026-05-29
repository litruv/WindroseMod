#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "HFSMStateComponent.h"
#include "ResolutionObserver.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GCFSM_API UResolutionObserver : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResolutionChanged, FIntPoint, Size, float, DPIScale);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResolutionChanged OnResolutionChanged;
    
    UResolutionObserver();

};

