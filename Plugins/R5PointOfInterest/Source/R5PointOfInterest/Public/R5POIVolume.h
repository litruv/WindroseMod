#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5POIVolume.generated.h"

class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class R5POINTOFINTEREST_API AR5POIVolume : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ShapeComponent;
    
public:
    AR5POIVolume(const FObjectInitializer& ObjectInitializer);

};

