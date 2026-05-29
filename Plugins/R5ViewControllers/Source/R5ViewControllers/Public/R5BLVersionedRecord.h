#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLObject -FallbackName=R5BLObject
#include "R5BLObject.h"
#include "R5BLVersionedRecord.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5VIEWCONTROLLERS_API UR5BLVersionedRecord : public UR5BLObject {
    GENERATED_BODY()
public:
    UR5BLVersionedRecord();

};

