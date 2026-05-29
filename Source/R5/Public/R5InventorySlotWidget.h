#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMPoolableView -FallbackName=R5MVVMPoolableView
#include "R5MVVMPoolableView.h"
#include "R5InventorySlotWidget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5InventorySlotWidget : public UR5MVVMPoolableView {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* btn_Root;
    
public:
    UR5InventorySlotWidget();

};

