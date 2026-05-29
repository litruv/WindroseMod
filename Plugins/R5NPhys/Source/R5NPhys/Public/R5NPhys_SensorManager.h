#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5NPhys_SensorManager.generated.h"

class UR5NPhys_ModelSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NPHYS_API UR5NPhys_SensorManager : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPhys_ModelSettings* ModelSettings;
    
public:
    UR5NPhys_SensorManager(const FObjectInitializer& ObjectInitializer);

};

