#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AgentComponentInterface -FallbackName=R5AS_AgentComponentInterface
#include "R5AS_AgentComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AwarenessComponentInterface -FallbackName=R5AS_AwarenessComponentInterface
#include "R5AS_AwarenessComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_MemoryComponentInterface -FallbackName=R5AS_MemoryComponentInterface
#include "R5AS_MemoryComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5EntityProgression -ObjectName=R5EntityProgressionInterface -FallbackName=R5EntityProgressionInterface
#include "R5EntityProgressionInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5DropItemInterface -FallbackName=R5DropItemInterface
#include "R5DropItemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5PlayerMetadataInterface -FallbackName=R5PlayerMetadataInterface
#include "R5PlayerMetadataInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5FactionComponentInterface -FallbackName=R5FactionComponentInterface
#include "R5FactionComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5OwnershipComponentInterface -FallbackName=R5OwnershipComponentInterface
#include "R5OwnershipComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5TrueRelationshipInterface -FallbackName=R5TrueRelationshipInterface
#include "R5TrueRelationshipInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioEventComponentInterface -FallbackName=R5ScenarioEventComponentInterface
#include "R5ScenarioEventComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioInterface -FallbackName=R5ScenarioInterface
#include "R5ScenarioInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Ship -ObjectName=R5ShipPhysicalPawn -FallbackName=R5ShipPhysicalPawn
#include "R5ShipPhysicalPawn.h"
#include "ER5InputMode.h"
#include "ER5SignificanceLevel.h"
#include "R5BLEntityInterface.h"
#include "R5BallisticArmorManagerInterface.h"
#include "R5BatteryAimingInterface.h"
#include "R5BatteryCombatAttributeInterface.h"
#include "R5BatteryManagerInterface.h"
#include "R5BuildingVolumeActorInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5HealthComponentInterface.h"
#include "R5PassengerTransportInterface.h"
#include "R5PlayerSpawnPointInterface.h"
#include "R5ScenarioCrewDirectorInterface.h"
#include "R5ShipComfortComponentInterface.h"
#include "R5ShipCustomizationInterface.h"
#include "R5ShipDamageVisualizerInterface.h"
#include "R5ShipOwnerInterface.h"
#include "R5SignificanceActor.h"
#include "R5ShipPawnBase.generated.h"

class AActor;
class APawn;
class UInputMappingContext;
class UR5ASCGameplayEffectProxyComponent;
class UR5AS_AgentComponent;
class UR5AS_AwarenessComponent;
class UR5AS_MemoryComponent;
class UR5AbilitySystemComponent;
class UR5AbilitySystemParams;
class UR5ActorRegistratorComponentDec2024;
class UR5AnimationInteractionCollector;
class UR5BLShipParams;
class UR5BallisticArmorManager;
class UR5BatteryAimingComponent;
class UR5BatteryManagerComponent;
class UR5BoardingComponent;
class UR5BoardingVolumesComponent;
class UR5BotBatteryAimingComponent;
class UR5CameraComponent;
class UR5CannonsRepresentationComponent;
class UR5CommonInteractionTargetComponent;
class UR5CrewManagerComponent;
class UR5DamageUIComponent;
class UR5FactionComponent;
class UR5FastTravelComponent;
class UR5FlagManagerComponent;
class UR5ISMCollectionComponent;
class UR5InstancedCollisionComponent;
class UR5MarkerComponent;
class UR5MastComponent;
class UR5MovableBuildingSupportComponent;
class UR5NPhys_SensorManager;
class UR5OwnershipComponent;
class UR5PassengerManagerComponent;
class UR5PrimitiveInteractionTargetComponent;
class UR5ProximityActorComponent;
class UR5RopeComponent;
class UR5ScenarioComponent_ForShip;
class UR5ScenarioCrewDirector_ForShip;
class UR5ScenarioEventComponent;
class UR5ShipAimingDitheringComponent;
class UR5ShipAttributeSet;
class UR5ShipAudioComponent;
class UR5ShipCollisionDamageComponent;
class UR5ShipCombatComponent;
class UR5ShipComfortComponent;
class UR5ShipDamageFXComponent;
class UR5ShipDamageVisualizer;
class UR5ShipDropItemsComponent;
class UR5ShipEmbarkComponent;
class UR5ShipEquipmentComponent;
class UR5ShipFXComponent;
class UR5ShipHealthComponent;
class UR5ShipHoldComponent;
class UR5ShipHullCustomization;
class UR5ShipModuleEfficiencyComponent;
class UR5ShipNameplateManagerComponent;
class UR5ShipNavigationBuilderComponent;
class UR5ShipPropsSignificanceComponent;
class UR5ShipSailComponent;
class UR5ShipSinkFXComponent;
class UR5ShipStaticParams;
class UR5ShipUIComponent;
class UR5SignificanceParams;
class UR5SplineCameraMovementComponent;
class UR5TaggedVolumeInvokerComponent;
class UR5VisibilitySwitcher;
class UR5WDSAttributeSet;
class UR5WeightManager;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, DefaultConfig, NoExport, Config=Engine)
class R5_API AR5ShipPawnBase : public AR5ShipPhysicalPawn, public IAbilitySystemInterface, public IR5PassengerTransportInterface, public IR5GameplayEffectProxyInterface, public IR5FactionComponentInterface, public IR5ShipDamageVisualizerInterface, public IR5HealthComponentInterface, public IR5PlayerSpawnPointInterface, public IR5AS_AgentComponentInterface, public IR5AS_AwarenessComponentInterface, public IR5BuildingVolumeActorInterface, public IR5SignificanceActor, public IR5ScenarioInterface, public IR5AS_MemoryComponentInterface, public IR5ShipOwnerInterface, public IR5InventoryInterface, public IR5OwnershipComponentInterface, public IR5ScenarioEventComponentInterface, public IR5EntityProgressionInterface, public IR5BLEntityInterface, public IR5DropItemInterface, public IR5BatteryCombatAttributeInterface, public IR5TrueRelationshipInterface, public IR5ScenarioCrewDirectorInterface, public IR5BatteryAimingInterface, public IR5BatteryManagerInterface, public IR5ShipComfortComponentInterface, public IR5ShipCustomizationInterface, public IR5PlayerMetadataInterface, public IR5BallisticArmorManagerInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetUpdateFrequencyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MovableBuildingSupportComponent* MovableBuildingSupportComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemComponent* R5AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5ShipAttributeSet* R5AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5WDSAttributeSet* WDSAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipCombatComponent* ShipCombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipEquipmentComponent* ShipEquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BatteryManagerComponent* ShipBatteriesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CannonsRepresentationComponent* CannonsRepresentation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InstancedCollisionComponent* CannonsInstancedCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5WeightManager* WeightManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PassengerManagerComponent* PassengerManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipFXComponent* ShipFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipSinkFXComponent* SinkFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipDamageFXComponent* DamageFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipAudioComponent* ShipAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipSailComponent* ShipSailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MastComponent* MastComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5RopeComponent* RopeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipHoldComponent* HoldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* EmbarkInteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* SteeringInteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ASCGameplayEffectProxyComponent* GASGameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CrewManagerComponent* CrewManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoyageAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhys_SensorManager* SensorManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipAimingDitheringComponent* DitheringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* DefaultMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HullStaticMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CustomizationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SplineCameraMovementComponent* ShipCameraMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipUIComponent* ShipUIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MarkerComponent* R5Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CameraComponent* ShipCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipEmbarkComponent* EmbarkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipDamageVisualizer* DamageVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipParams> BLShipParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ShipStaticParams> ShipStaticParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BatteryAimingComponent* AimingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BotBatteryAimingComponent* BotAimingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_MemoryComponent* MemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FactionComponent* FactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BoardingComponent* BoardingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AgentComponent* R5AgentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AwarenessComponent* R5AS_AwarenessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipModuleEfficiencyComponent* ModuleEfficiencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DamageUIComponent* DamageUIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForShip* R5ScenarioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipNavigationBuilderComponent* NavigationBuilder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipPropsSignificanceComponent* PropsSignificanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5ISMCollectionComponent* ISMCollectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewDirector_ForShip* ScenarioCrewDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5OwnershipComponent* OwnershipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5ScenarioEventComponent* ScenarioEventComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5ProximityActorComponent* ProximityActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5VisibilitySwitcher* VisibilitySwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipDropItemsComponent* DropItemsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipCollisionDamageComponent* CollisionDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ActorRegistratorComponentDec2024* ActorRegistratorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5TaggedVolumeInvokerComponent* TaggedVolumeInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipHullCustomization* HullCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FlagManagerComponent* FlagManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipNameplateManagerComponent* NameplateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AnimationInteractionCollector* AnimationInteractionCollector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BoardingVolumesComponent* BoardingVolumesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipComfortComponent* ShipComfortComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FastTravelComponent* FastTravelComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BallisticArmorManager* ArmorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBotControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel PhysicsMovementSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel KinematicUseWaterLevelSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SignificanceParams* SignificanceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel ServerSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SignificanceTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDetectedTravelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastTravelDistancePosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShipId, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ShipId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCrewState, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentCrewState;
    
public:
    AR5ShipPawnBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnShipWeightUpdate(float Delta, float TotalWeight);
    
    UFUNCTION(BlueprintCallable)
    void OnShipStartSinking(const FGameplayTagContainer& DeathReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShipId(const FR5BLRecordId& PreviousShipId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCrewState(const FGameplayTag& PrevCrewState);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnDead(APawn* Pawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPassengersNumChanged(APawn* Passenger);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCrewStateChange(const FGameplayTag& PrevStateTag, const FGameplayTag& CurrentStateTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAllPassengersLeaveShip();
    
private:
    UFUNCTION(BlueprintCallable)
    void InputModeChanged(ER5InputMode Mode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipUIComponent* GetShipUIComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipSailComponent* GetShipSailComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipAudioComponent* GetShipAudioComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5FactionComponent* GetFactionComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CaptainChanged(AActor* NewCaptain, AActor* OldCaptain);
    

    // Fix for true pure virtual functions not being implemented
};

