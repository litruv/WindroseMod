#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "GameFramework/PlayerController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
#include "R5DamageUIInterface.h"
#include "R5LocalPredictedDamageInterface.h"
#include "R5PlayerController.generated.h"

class APawn;
class AR5PlayerCharacter;
class AR5PlayerController;
class UObject;
class UR5DamageUIComponent;
class UR5LocalPredictedDamageComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PlayerController : public APlayerController, public IAbilitySystemInterface, public IR5LocalPredictedDamageInterface, public IR5DamageUIInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnCinematicModeChanged, bool, bIsActiveCinematic);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnCinematicModeChanged OnCinematicModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5LocalPredictedDamageComponent* LocalPredictedDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DamageUIComponent* DamageUIComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEnableCheatsOnClient;
    
public:
    AR5PlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicModeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AR5PlayerController* GetR5PlayerControllerForLocalPlayer(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AR5PlayerCharacter* GetR5PlayerCharacter() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearControllerFromPawn(APawn* InPawn, APlayerController* InPlayerController);
    

    // Fix for true pure virtual functions not being implemented
};

