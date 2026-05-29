#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ExplosionReactionComponent.generated.h"

class UR5ExplosiveReactionData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ExplosionReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ExplosiveReactionData* ExplosiveReactionData;
    
public:
    UR5ExplosionReactionComponent(const FObjectInitializer& ObjectInitializer);

};

