#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetworkPredictionInterface -FallbackName=NetworkPredictionInterface
#include "Interfaces/NetworkPredictionInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=R5MercunaPawnMovementComponent -FallbackName=R5MercunaPawnMovementComponent
#include "R5MercunaPawnMovementComponent.h"
#include "R5PawnMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PawnMovementComponent : public UR5MercunaPawnMovementComponent, public INetworkPredictionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Speed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientRotationToMovement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkMaxSmoothUpdateDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkNoSmoothUpdateDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothingPredictThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientRunningAheadPullBack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableFallBehindServerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerLastTransformUpdateTimeStamp, meta=(AllowPrivateAccess=true))
    float ServerLastTransformUpdateTimeStamp;
    
public:
    UR5PawnMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerLastTransformUpdateTimeStamp();
    

    // Fix for true pure virtual functions not being implemented
};

