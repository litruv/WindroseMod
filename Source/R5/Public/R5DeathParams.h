#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DeathParams.generated.h"

class UR5BaseActorDeathParams;
class UR5PersonalDeathParams;

UCLASS(Blueprintable)
class R5_API UR5DeathParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BaseActorDeathParams* BaseActorDeathParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PersonalDeathParams* PersonalDeathParams;
    
    UR5DeathParams();

};

