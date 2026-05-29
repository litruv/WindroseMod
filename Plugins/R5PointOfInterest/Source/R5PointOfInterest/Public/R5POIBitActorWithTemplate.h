#pragma once
#include "CoreMinimal.h"
#include "R5POIBit.h"
#include "R5POIBitActorWithTemplate.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class R5POINTOFINTEREST_API UR5POIBitActorWithTemplate : public UR5POIBit {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    AActor* ActorTemplate;
    
public:
    UR5POIBitActorWithTemplate();

};

