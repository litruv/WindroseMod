#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMModel -FallbackName=R5MVVMModel
#include "R5MVVMModel.h"
#include "R5ShipCustomizationItemsListModel.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipCustomizationItemsListModel : public UR5MVVMModel {
    GENERATED_BODY()
public:
    UR5ShipCustomizationItemsListModel();

};

