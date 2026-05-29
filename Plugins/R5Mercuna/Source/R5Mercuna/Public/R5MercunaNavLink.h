#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=EMercunaNavigationLinkDirection -FallbackName=EMercunaNavigationLinkDirection
#include "EMercunaNavigationLinkDirection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaNavLink -FallbackName=MercunaNavLink
#include "MercunaNavLink.h"
#include "R5MercunaNavLink.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, NoExport)
class R5MERCUNA_API AR5MercunaNavLink : public AMercunaNavLink {
    GENERATED_BODY()
public:
    AR5MercunaNavLink(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void NavLinkStart(APawn* InPawn, EMercunaNavigationLinkDirection InDirection, FVector InDestination);
    
};

