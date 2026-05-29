#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "GameFramework/Pawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AgentComponentInterface -FallbackName=R5AS_AgentComponentInterface
#include "R5AS_AgentComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_MemoryComponentInterface -FallbackName=R5AS_MemoryComponentInterface
#include "R5AS_MemoryComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5SharedDataStoreUser -FallbackName=R5SharedDataStoreUser
#include "R5SharedDataStoreUser.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Mercuna -ObjectName=R5MercunaNavigationInterface -FallbackName=R5MercunaNavigationInterface
#include "R5MercunaNavigationInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Visibility -ObjectName=R5VisibilityTargetInterface -FallbackName=R5VisibilityTargetInterface
#include "R5VisibilityTargetInterface.h"
#include "R5AIPawnCommon.h"
#include "R5DeactivationComponentInterface.h"
#include "R5DeathComponentInterface.h"
#include "R5FootstepComponentInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5InterruptibleSoundInterface.h"
#include "R5PassengerInterface.h"
#include "R5SignificanceManagerComponentInterface.h"
#include "R5AISimplePawn.generated.h"

class AR5AIController;
class UCapsuleComponent;
class UR5AIPawnParams;
class UR5AS_AgentComponent;
class UR5AS_MemoryComponent;
class UR5DeactivationComponent;
class UR5DeathComponent;
class UR5ExplosionReactionComponent;
class UR5FootstepComponent;
class UR5MercunaGroundNavigationComponent;
class UR5PawnMovementComponent;
class UR5SignificanceManagerComponent;
class UR5SimpleFoliageGameplayEffectProxyComponent;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5AISimplePawn : public APawn, public IR5DeathComponentInterface, public IR5SignificanceManagerComponentInterface, public IR5DeactivationComponentInterface, public IR5GameplayEffectProxyInterface, public IR5FootstepComponentInterface, public IR5InterruptibleSoundInterface, public IR5VisibilityTargetInterface, public IR5MercunaNavigationInterface, public IR5AS_AgentComponentInterface, public IR5AS_MemoryComponentInterface, public IR5PassengerInterface, public IR5AIPawnCommon, public IR5SharedDataStoreUser {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeathComponent* DeathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SignificanceManagerComponent* SignificanceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DeactivationComponent* DeactivationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SimpleFoliageGameplayEffectProxyComponent* FoliageGameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FootstepComponent* FootstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MercunaGroundNavigationComponent* MercunaGroundNavigationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIPawnParams* AIPawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AgentComponent* R5AgentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_MemoryComponent* MemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ProjectileInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PawnMovementComponent* PawnMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ColorID, meta=(AllowPrivateAccess=true))
    uint8 ColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5AIPawnParams> OverriddenAIPawnParams;
    
public:
    AR5AISimplePawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ColorID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AR5AIController* GetR5AIController() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCharacter();
    

    // Fix for true pure virtual functions not being implemented
};

