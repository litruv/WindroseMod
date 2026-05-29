#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "Subsystems/EngineSubsystem.h"
#include "R5NetBusinessRuleOuterFactory.generated.h"

class UR5BLBusinessRuleBaseUe;

UCLASS(Blueprintable)
class R5NET_API UR5NetBusinessRuleOuterFactory : public UEngineSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, UR5BLBusinessRuleBaseUe*> OuterInstances;
    
public:
    UR5NetBusinessRuleOuterFactory();

};

