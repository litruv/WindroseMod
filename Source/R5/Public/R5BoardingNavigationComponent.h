#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Mercuna -ObjectName=R5NavigationBuilderComponent -FallbackName=R5NavigationBuilderComponent
#include "R5NavigationBuilderComponent.h"
#include "Templates/SubclassOf.h"
#include "R5BoardingNavigationComponent.generated.h"

class AR5MercunaNavLink;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BoardingNavigationComponent : public UR5NavigationBuilderComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5MercunaNavLink> NavLinkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightRange;
    
public:
    UR5BoardingNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

