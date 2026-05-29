#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5BuildingCommand.generated.h"

class AController;

UCLASS(Abstract, Blueprintable)
class R5_API UR5BuildingCommand : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Instigator;
    
    UR5BuildingCommand();

};

