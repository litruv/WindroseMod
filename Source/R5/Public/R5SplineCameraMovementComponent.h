#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5SplineCameraMovementComponent.generated.h"

class AActor;
class AController;
class APawn;
class AR5SplineContainer;
class UR5BatteryCameraMovementParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SplineCameraMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoomValueChanged, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTurnPercentageChanged, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCameraTransitionEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraStateChanged, const FGameplayTag&, NewState, const FGameplayTag&, OldState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraStateChanged OnCameraStateChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BatteryCameraMovementParams> CameraMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5SplineContainer> SplineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraState, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentCameraStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag PreviousCameraStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultCameraStateTag;
    
public:
    UR5SplineCameraMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetCameraTransform(const FVector& Location, const FRotator& Rotation);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCameraState(const FGameplayTag& NewState, const FGameplayTag& PreviousState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraState();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(BlueprintCallable)
    void OnAliveStatusChanged(bool bAlive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeSpyGlassInput(const FInputActionValue& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeOrbitAimingState(uint8 NewState, AActor* Owner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeAimInput(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddZoomInput(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddUpInput(const FInputActionValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddTurnInput(const FInputActionValue& Value);
    
};

