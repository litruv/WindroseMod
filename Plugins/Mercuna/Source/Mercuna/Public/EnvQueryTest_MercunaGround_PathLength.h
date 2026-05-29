#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkQueryMode.h"
#include "EnvQueryTest_Mercuna2D_PathLength.h"
#include "EnvQueryTest_MercunaGround_PathLength.generated.h"

UCLASS(Blueprintable)
class MERCUNA_API UEnvQueryTest_MercunaGround_PathLength : public UEnvQueryTest_Mercuna2D_PathLength {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaNavLinkQueryMode FollowNavLinks;
    
    UEnvQueryTest_MercunaGround_PathLength();

};

