#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Inventory -ObjectName=R5InventoryInterface -FallbackName=R5InventoryInterface
#include "R5InventoryInterface.h"
#include "R5BuildingBlock.h"
#include "R5ExplosiveBarrel.generated.h"

class AR5ExplosionBarrel;

UCLASS(Blueprintable, NoExport)
class R5_API AR5ExplosiveBarrel : public AR5BuildingBlock, public IR5InventoryInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5ExplosionBarrel> ExplosionActorClass;
    
public:
    AR5ExplosiveBarrel(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

