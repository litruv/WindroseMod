#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5WidgetPool -ObjectName=R5PoolableWidget -FallbackName=R5PoolableWidget
#include "R5PoolableWidget.h"
#include "R5MVVMView.h"
#include "R5MVVMPoolableView.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5MODELVIEWVIEWMODEL_API UR5MVVMPoolableView : public UR5MVVMView, public IR5PoolableWidget {
    GENERATED_BODY()
public:
    UR5MVVMPoolableView();


    // Fix for true pure virtual functions not being implemented
};

