#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5WidgetPoolData.h"
#include "R5WidgetPoolParams.generated.h"

class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class R5WIDGETPOOL_API UR5WidgetPoolParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UUserWidget>, FR5WidgetPoolData> InitialWidgetsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsToClearExtraItems;
    
    UR5WidgetPoolParams();

};

