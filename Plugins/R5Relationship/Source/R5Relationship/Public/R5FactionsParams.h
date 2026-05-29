#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ER5Faction.h"
#include "R5FactionsParams.generated.h"

UCLASS(Blueprintable)
class R5RELATIONSHIP_API UR5FactionsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ER5Faction> DefaultFactionFlags;
    
    UR5FactionsParams();

};

