#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5GameTimeComponent.generated.h"

UCLASS(Blueprintable, DefaultConfig, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class R5_API UR5GameTimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ServerTickTime;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double BeginPlayMoment;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double IcelandLiveTimeAtBeginPlayMoment;
    
public:
    UR5GameTimeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

