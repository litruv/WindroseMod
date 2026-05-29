#pragma once
#include "CoreMinimal.h"
#include "ER5Faction.h"
#include "ER5Relationship.h"
#include "R5FactionRelationshipData.generated.h"

USTRUCT(BlueprintType)
struct R5RELATIONSHIP_API FR5FactionRelationshipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5Relationship Relationship;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Title;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5Faction Faction;
    
public:
    FR5FactionRelationshipData();
};

