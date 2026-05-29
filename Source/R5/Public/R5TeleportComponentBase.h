#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/BoxComponent.h"
#include "R5TeleportComponentBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5TeleportComponentBase : public UBoxComponent {
    GENERATED_BODY()
public:
    UR5TeleportComponentBase(const FObjectInitializer& ObjectInitializer);

};

