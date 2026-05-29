#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ER5Relationship.h"
#include "R5RelationshipHandlerCommonData.h"
#include "R5RelationshipCommonParams.generated.h"

UCLASS(Blueprintable)
class R5RELATIONSHIP_API UR5RelationshipCommonParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5Relationship DefaultRelationship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5Relationship DefaultRelationshipToPartyMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RelationshipHandlerCommonData> RelationshipHandlers;
    
    UR5RelationshipCommonParams();

};

