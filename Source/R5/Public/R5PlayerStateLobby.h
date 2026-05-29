#pragma once
#include "CoreMinimal.h"
#include "R5CharacterCustomizationComponentInterface.h"
#include "R5PlayerStateBase.h"
#include "R5PlayerStateLobby.generated.h"

class UR5CharacterCustomizationComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PlayerStateLobby : public AR5PlayerStateBase, public IR5CharacterCustomizationComponentInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CharacterCustomizationComponent* CharacterCustomizationComponent;
    
public:
    AR5PlayerStateLobby(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CharacterCustomizationComponent* GetCharacterCustomizationComponent() const;
    

    // Fix for true pure virtual functions not being implemented
};

