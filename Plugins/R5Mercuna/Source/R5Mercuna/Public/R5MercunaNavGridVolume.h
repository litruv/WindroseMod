#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaNavGridVolume -FallbackName=MercunaNavGridVolume
#include "MercunaNavGridVolume.h"
#include "R5MercunaNavGridVolume.generated.h"

UCLASS(Blueprintable, NoExport)
class R5MERCUNA_API AR5MercunaNavGridVolume : public AMercunaNavGridVolume {
    GENERATED_BODY()
public:
    AR5MercunaNavGridVolume(const FObjectInitializer& ObjectInitializer);

};

