#pragma once
#include "CoreMinimal.h"
#include "R5MercunaNavLink.h"
#include "R5ForwardMotionNavLink.generated.h"

UCLASS(Blueprintable, NoExport)
class R5MERCUNA_API AR5ForwardMotionNavLink : public AR5MercunaNavLink {
    GENERATED_BODY()
public:
    AR5ForwardMotionNavLink(const FObjectInitializer& ObjectInitializer);

};

