#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5TeleportSpotCollision.h"
#include "R5AbilityTask_FindTeleportSpot.generated.h"

class AActor;
class UGameplayAbility;
class UR5AbilityTask_FindTeleportSpot;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class R5GAS_API UR5AbilityTask_FindTeleportSpot : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResultDynamicDelegate, bool, bSuccess, const FVector&, BasementLocation);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultDynamicDelegate OnFinishSpotSearch;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestLimitPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FindBaseSweepOffsetDown;
    
public:
    UR5AbilityTask_FindTeleportSpot();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_FindTeleportSpot* NewTaskLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FR5TeleportSpotCollision SpotCollision, TArray<FVector> PredefinedLocations, float SearchRadius, const FVector& LocationToSearchAround);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_FindTeleportSpot* NewTaskActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, FR5TeleportSpotCollision SpotCollision, TArray<FVector> PredefinedLocations, float SearchRadius, const AActor* ActorToSearchAround);
    
};

