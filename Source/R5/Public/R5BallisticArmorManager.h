#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5BallisticArmorInstance.h"
#include "R5BallisticArmorManager.generated.h"

class UR5InstancedCollisionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BallisticArmorManager : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BallisticArmorInstance> ArmorInstanceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5InstancedCollisionComponent* InstancedCollision;
    
public:
    UR5BallisticArmorManager(const FObjectInitializer& ObjectInitializer);

};

