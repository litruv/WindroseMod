#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5N_InfluenceStatusComponent.h"
#include "R5WeatherInfluenceStatusProperty.h"
#include "R5N_WeatherInfluenceStatusComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5WEATHER_API UR5N_WeatherInfluenceStatusComponent : public UActorComponent, public IR5N_InfluenceStatusComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5WeatherStatusChanged, bool, NewValue);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWetnessCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WeatherInfluenceStatusProperty Wetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWindCloseCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WeatherInfluenceStatusProperty OnWind;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WeatherStatusChanged OnChangeWetness;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5WeatherStatusChanged OnChangeWindClose;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StatusTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Wet, meta=(AllowPrivateAccess=true))
    bool bWet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnWind, meta=(AllowPrivateAccess=true))
    bool bOnWind;
    
public:
    UR5N_WeatherInfluenceStatusComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Wet();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnWind();
    
public:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetStatusTags();
    

    // Fix for true pure virtual functions not being implemented
};

