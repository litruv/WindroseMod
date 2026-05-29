#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5FSMChangeStateType.h"
#include "R5CharacterFsmComponent.generated.h"

class AActor;
class UInputMappingContext;
class UObject;
class UR5CharacterFsmComponent;
class UR5CharacterFsmParams;
class UR5CharacterFsmTransitionTrigger;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CharacterFsmComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeState, FGameplayTag, PrevState, FGameplayTag, CurrentState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeState OnChangeState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CharacterFsmParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingContext*> InputMappingContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UR5CharacterFsmTransitionTrigger*> TransitionTriggers;
    
public:
    UR5CharacterFsmComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnableDefaultState(ER5FSMChangeStateType ChangeStateType);
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerChangeState(const FGameplayTag& NewState, ER5FSMChangeStateType ChangeStateType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    void HasCurrentState(bool& bIsCorrectly, FGameplayTag& CurrentState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5CharacterFsmComponent* GetR5CharacterFsmForLocalPlayer(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5CharacterFsmComponent* GetCharacterFsmComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStateToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(const FGameplayTag& NewState);
    
    UFUNCTION(BlueprintPure)
    bool CanChangeState(const FGameplayTag& NewState, ER5FSMChangeStateType ChangeStateType, bool bIsAuthorityRequest) const;
    
};

