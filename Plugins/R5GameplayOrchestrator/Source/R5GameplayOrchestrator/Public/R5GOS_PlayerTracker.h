#pragma once
#include "CoreMinimal.h"
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_PlayerTracker.generated.h"

class UR5GOS_PlayerTracker_InvokerComponent;

UCLASS(Blueprintable, Config=Engine)
class R5GAMEPLAYORCHESTRATOR_API UR5GOS_PlayerTracker : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double HalfActivityInvokerRadius;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double FullActivityInvokerRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfActivityCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullActivityCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnsureInvokerAreaReadiness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvokerTeleportAreaActivationExtent;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InvokerTeleportDetectionThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockAffectionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5GOS_PlayerTracker_InvokerComponent*> Invokers;
    
public:
    UR5GOS_PlayerTracker();

};

