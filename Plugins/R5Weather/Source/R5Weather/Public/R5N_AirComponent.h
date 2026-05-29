#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5N_Medium.h"
#include "WindParams.h"
#include "R5N_AirComponent.generated.h"

class UMaterialParameterCollection;
class UObject;
class UR5N_AirComponent;
class UR5N_WindSettingsComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5WEATHER_API UR5N_AirComponent : public UActorComponent, public IR5N_Medium {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4f> WindMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WindMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* WindParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5N_WindSettingsComponent> WindSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWindParams CurrentWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWindParams NextWind;
    
public:
    UR5N_AirComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWindMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMainWindDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFlowVector(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    static UR5N_AirComponent* Get(const UObject* Wco);
    

    // Fix for true pure virtual functions not being implemented
};

