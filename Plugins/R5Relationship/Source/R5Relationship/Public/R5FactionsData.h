#pragma once
#include "CoreMinimal.h"
#include "ER5Faction.h"
#include "R5FactionRelationshipData.h"
#include "R5FactionsData.generated.h"

USTRUCT(BlueprintType)
struct R5RELATIONSHIP_API FR5FactionsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FR5FactionRelationshipData> Relationships;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Title;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5Faction Faction;
    
public:
    FR5FactionsData();
};

