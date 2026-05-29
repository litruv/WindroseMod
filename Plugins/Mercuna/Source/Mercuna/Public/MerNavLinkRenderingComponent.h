#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "MerNavLinkRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMerNavLinkRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UMerNavLinkRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

