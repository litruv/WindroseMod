#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5N_DayCycleTimeComponent.generated.h"

class UObject;
class UR5N_DayCycleTimeComponent;
class UR5N_DayCycleTimeSettingsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NDAYCYCLETIME_API UR5N_DayCycleTimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5N_DayCycleTimeSettingsComponent> Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WorldDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DayCycleSpeedInv;
    
public:
    UR5N_DayCycleTimeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartOfNight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector3f GetPartOfDayPart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartOfDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedDayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTimeInHours() const;
    
    UFUNCTION(BlueprintCallable)
    static UR5N_DayCycleTimeComponent* Get(const UObject* Wco);
    
};

