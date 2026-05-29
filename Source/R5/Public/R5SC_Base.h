#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMStateComponent -FallbackName=R5MVVMStateComponent
#include "R5MVVMStateComponent.h"
#include "R5SC_Base.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5SC_Base : public UR5MVVMStateComponent {
    GENERATED_BODY()
public:
    UR5SC_Base();

};

