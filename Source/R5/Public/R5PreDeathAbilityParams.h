#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "PreDeathAbilityData.h"
#include "R5PreDeathAbilityParams.generated.h"

class UR5DeathParams;
class UR5PreDeathInstancedTask;

UCLASS(Blueprintable)
class R5_API UR5PreDeathAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreDeathAbilityData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DeathParams* CustomDeathParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5PreDeathInstancedTask*> Tasks;
    
    UR5PreDeathAbilityParams();

};

