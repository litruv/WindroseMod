#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize10 -FallbackName=Vector_NetQuantize10
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "OnEndPlayDelegate.h"
#include "R5ProjectileSurfaceEffectData.h"
#include "Templates/SubclassOf.h"
#include "R5ProjectileCosmeticComponent.generated.h"

class ANiagaraActor;
class UAudioComponent;
class UNiagaraComponent;
class UR5ProjectileSurfaceEffectParams;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ProjectileCosmeticComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndPlay OnEndPlay;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ProjectileSurfaceEffectParams* ProjectileSurfaceEffectsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FlyLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TrailNC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANiagaraActor> DefaultTrailActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANiagaraActor> TrailActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FlyLoopAudioComponent;
    
public:
    UR5ProjectileCosmeticComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastSpawnImpactStaticEffect(const FVector_NetQuantize10& Location, const FVector_NetQuantize10& ImpactNormal, const FR5ProjectileSurfaceEffectData& ProjectileSurfaceEffectData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HandleWaterEffect(FGameplayTag EffectTag) const;
    
};

