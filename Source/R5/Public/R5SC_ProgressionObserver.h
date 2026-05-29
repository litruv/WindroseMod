#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLLevelData -FallbackName=R5BLLevelData
#include "R5BLLevelData.h"
#include "R5SC_ProgressionObserver.generated.h"

class UR5BLEntityProgressionView;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_ProgressionObserver : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FR5OnLevelChanged, int32, OldLevel, int32, NewLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FR5OnFreePointsChanged, int32, OldPoint, int32, NewPoints);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnExpChanged, int32, DeltaExp);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnLevelChanged OnLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnExpChanged OnExpChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnFreePointsChanged OnFreeTalentPointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnFreePointsChanged OnFreeStatPointsChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLEntityProgressionView* EntityProgressionView;
    
public:
    UR5SC_ProgressionObserver();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFreeTalentPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFreeStatPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLLevelData GetCurrentLevelData() const;
    
};

