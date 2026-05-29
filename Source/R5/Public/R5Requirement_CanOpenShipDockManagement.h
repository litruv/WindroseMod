#pragma once
#include "CoreMinimal.h"
#include "R5Requirement_CanOpenShipManagement.h"
#include "R5Requirement_CanOpenShipDockManagement.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Requirement_CanOpenShipDockManagement : public UR5Requirement_CanOpenShipManagement {
    GENERATED_BODY()
public:
    UR5Requirement_CanOpenShipDockManagement();

};

