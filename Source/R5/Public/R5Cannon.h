#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActorRegistrator -ObjectName=R5ActorRegistratorBBox -FallbackName=R5ActorRegistratorBBox
#include "R5ActorRegistratorBBox.h"
#include "R5CannonScenarioInfo.h"
#include "R5InteractionTargetBaseImpl.h"
#include "R5Cannon.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, DefaultConfig, NoExport, Config=Game)
class R5_API AR5Cannon : public AActor, public IAbilitySystemInterface, public IR5InteractionTargetBaseImpl, public IR5ActorRegistratorBBox {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShot);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShot OnShot;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetUpdateFrequencyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Carriage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Barrel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnProtectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 CannonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 BatteryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RelativeInBatteryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> PitchAxis;
    
public:
    AR5Cannon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCannonTick(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5CannonScenarioInfo GetScenarioInfo() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetInteractionTargetTitle(const FText& NewTitle) override PURE_VIRTUAL(SetInteractionTargetTitle,);
    
};

