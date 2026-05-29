#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ClosedAreaSoundModifierComponent.generated.h"

class AController;
class APawn;
class UR5ClosedAreaSoundModifierParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ClosedAreaSoundModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ClosedAreaSoundModifierParams> Params;
    
public:
    UR5ClosedAreaSoundModifierComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* InPawn, AController* InOldController, AController* InNewController);
    
};

