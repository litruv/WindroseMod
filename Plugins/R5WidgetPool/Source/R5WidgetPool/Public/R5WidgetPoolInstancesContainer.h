#pragma once
#include "CoreMinimal.h"
#include "R5WidgetPoolInstancesContainer.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FR5WidgetPoolInstancesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> Widgets;
    
    R5WIDGETPOOL_API FR5WidgetPoolInstancesContainer();
};

