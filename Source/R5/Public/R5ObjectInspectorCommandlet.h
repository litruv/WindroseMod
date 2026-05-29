#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "Commandlets/Commandlet.h"
#include "R5ObjectInspectorCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ObjectInspectorCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UR5ObjectInspectorCommandlet();

};

