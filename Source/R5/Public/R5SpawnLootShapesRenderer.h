#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "R5ExternalShapesProviderInterface.h"
#include "R5SpawnLootShapesRenderer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SpawnLootShapesRenderer : public UPrimitiveComponent, public IR5ExternalShapesProviderInterface {
    GENERATED_BODY()
public:
    UR5SpawnLootShapesRenderer(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

