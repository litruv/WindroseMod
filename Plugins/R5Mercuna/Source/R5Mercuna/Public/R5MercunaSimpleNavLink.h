#pragma once
#include "CoreMinimal.h"
#include "R5MercunaNavLink.h"
#include "R5MercunaSimpleNavLink.generated.h"

UCLASS(Blueprintable, NoExport)
class R5MERCUNA_API AR5MercunaSimpleNavLink : public AR5MercunaNavLink {
    GENERATED_BODY()
public:
    AR5MercunaSimpleNavLink(const FObjectInitializer& ObjectInitializer);

};

