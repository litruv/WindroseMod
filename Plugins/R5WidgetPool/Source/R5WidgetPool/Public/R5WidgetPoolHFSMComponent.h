#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5WidgetPoolInstancesContainer.h"
#include "R5WidgetPoolHFSMComponent.generated.h"

class UR5WidgetPoolParams;

UCLASS(Blueprintable, EditInlineNew)
class R5WIDGETPOOL_API UR5WidgetPoolHFSMComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5WidgetPoolParams> PoolingParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FR5WidgetPoolInstancesContainer> WidgetsPool;
    
public:
    UR5WidgetPoolHFSMComponent();

};

