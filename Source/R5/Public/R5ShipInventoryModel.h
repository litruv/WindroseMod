#pragma once
#include "CoreMinimal.h"
#include "R5DefaultInventoryModel.h"
#include "R5ShipInventoryModel.generated.h"

class UR5BLInventoryView;

UCLASS(Blueprintable)
class R5_API UR5ShipInventoryModel : public UR5DefaultInventoryModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* ShipInventoryView;
    
public:
    UR5ShipInventoryModel();

};

