#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ER5Relationship.h"
#include "R5FactionsData.h"
#include "R5FactionsKey.h"
#include "R5FactionsRelationshipParams.generated.h"

UCLASS(Blueprintable)
class R5RELATIONSHIP_API UR5FactionsRelationshipParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FR5FactionsData> Factions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FR5FactionsKey, ER5Relationship> FactionRelationship;
    
public:
    UR5FactionsRelationshipParams();

};

