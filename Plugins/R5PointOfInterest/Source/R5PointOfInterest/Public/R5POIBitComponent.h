#pragma once
#include "CoreMinimal.h"
#include "R5POIBit.h"
#include "R5POIBitComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class R5POINTOFINTEREST_API UR5POIBitComponent : public UR5POIBit {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TemplateComponent;
    
public:
    UR5POIBitComponent();

};

