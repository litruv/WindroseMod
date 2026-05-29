#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5CharacterUIModel.generated.h"

class ACharacter;
class UR5CharacterUIModel;
class UR5DeathParams;

UCLASS(Blueprintable)
class R5_API UR5CharacterUIModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5AttributeChanged, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeTemporalHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeMaxHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangePosture;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeMaxPosture;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeStamina;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeMaxStamina;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeCorruptionStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeMaxCorruptionStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttributeChanged OnChangeCorruptionStatusBuildupResist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeath;
    
    UR5CharacterUIModel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeathSpectatorStarted(UR5DeathParams* DeathParams);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTemporalHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinStaminaLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxPosture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxCorruptionStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPosture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorruptionStatusBuildupResist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorruptionStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5CharacterUIModel* CreateCharacterUIModel(ACharacter* Owner);
    
};

