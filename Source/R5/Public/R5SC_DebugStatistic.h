#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5SC_DebugStatistic.generated.h"

class UR5BLAccountGameSettingsView;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_DebugStatistic : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnDebugStatisticStatusChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnDebugStatisticStatusChanged OnDebugStatisticStatusChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLAccountGameSettingsView* AccountSettingsView;
    
public:
    UR5SC_DebugStatistic();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStatsEnabled() const;
    
};

