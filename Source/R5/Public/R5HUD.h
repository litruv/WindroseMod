#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "UObject/SoftObjectPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "GameFramework/HUD.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMComponentInterface -FallbackName=R5MVVMComponentInterface
#include "R5MVVMComponentInterface.h"
#include "R5HUD.generated.h"

class AR5HUD;
class UObject;
class UR5HUDScalingComponent;
class UR5MVVMComponent;

UCLASS(Blueprintable, NoExport, NonTransient)
class R5_API AR5HUD : public AHUD, public IR5MVVMComponentInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> AssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MVVMComponent* MVVMComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5HUDScalingComponent* HUDScalingComponent;
    
public:
    AR5HUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerHFSM(const FGameplayTag& TagEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopHFSM();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchHFSM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AR5HUD* GetR5HUD(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5HUDScalingComponent* GetHUDScalingComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

