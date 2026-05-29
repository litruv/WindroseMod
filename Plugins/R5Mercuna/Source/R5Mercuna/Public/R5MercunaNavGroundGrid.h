#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaNavGroundGrid -FallbackName=MercunaNavGroundGrid
#include "MercunaNavGroundGrid.h"
#include "R5MercunaNavGroundGrid.generated.h"

UCLASS(Blueprintable, NoExport)
class R5MERCUNA_API AR5MercunaNavGroundGrid : public AMercunaNavGroundGrid {
    GENERATED_BODY()
public:
    AR5MercunaNavGroundGrid(const FObjectInitializer& ObjectInitializer);

};

