#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Blueprint/UserWidget.h"
#include "R5BuildingGroupWidget.generated.h"

class UR5BuildingItemWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5BuildingGroupWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5BuildingItemWidget*> BuildingItems;
    
    UR5BuildingGroupWidget();

};

