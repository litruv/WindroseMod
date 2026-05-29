#pragma once
#include "CoreMinimal.h"
#include "R5CommonInteractionTargetComponent.h"
#include "R5GOS_GenericActors_InteractionTargetComponent.generated.h"

class AR5GOS_GenericActors_Collection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UR5GOS_GenericActors_InteractionTargetComponent : public UR5CommonInteractionTargetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5GOS_GenericActors_Collection* Collection;
    
    UR5GOS_GenericActors_InteractionTargetComponent(const FObjectInitializer& ObjectInitializer);

};

