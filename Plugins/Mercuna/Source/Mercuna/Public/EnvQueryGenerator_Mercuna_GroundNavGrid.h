#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkQueryMode.h"
#include "EnvQueryGenerator_Mercuna_2DNavGrid.h"
#include "EnvQueryGenerator_Mercuna_GroundNavGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_GroundNavGrid : public UEnvQueryGenerator_Mercuna_2DNavGrid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaNavLinkQueryMode FollowNavLinks;
    
    UEnvQueryGenerator_Mercuna_GroundNavGrid();

};

