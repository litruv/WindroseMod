#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5AuthComponent_Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AUTHPROXY_API UR5AuthComponent_Base : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5AuthComponent_Base();

};

