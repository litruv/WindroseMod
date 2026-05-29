#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterCustomizationData -FallbackName=R5BLCharacterCustomizationData
#include "R5BLCharacterCustomizationData.h"
#include "R5CharacterCustomizationComponent.generated.h"

class AR5PlayerStateBase;
class UR5BLCharacterCustomizationView;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CharacterCustomizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLCharacterCustomizationView* CharacterCustomizationView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5PlayerStateBase* R5PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomizationData CharacterCustomizationData;
    
public:
    UR5CharacterCustomizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SaveCharacterCustomizationOnServer(const FR5BLCharacterCustomizationData& SavedData);
    
};

