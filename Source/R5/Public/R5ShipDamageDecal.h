#pragma once
#include "CoreMinimal.h"
#include "R5ShipDamageDecal.generated.h"

class UDecalComponent;

USTRUCT(BlueprintType)
struct FR5ShipDamageDecal {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> DecalComponentArray;
    
public:
    R5_API FR5ShipDamageDecal();
};

