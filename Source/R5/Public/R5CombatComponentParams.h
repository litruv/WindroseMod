#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AdditionalInputData.h"
#include "R5AttackInputData.h"
#include "R5BlockInputData.h"
#include "R5CombatStateData.h"
#include "R5OffHandInputData.h"
#include "R5CombatComponentParams.generated.h"

UCLASS(Blueprintable)
class UR5CombatComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AttackInputData AttackInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BlockInputData BlockInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5CombatStateData CombatStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OffHandInputData OffHandInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AdditionalInputData AdditionalInputData;
    
    UR5CombatComponentParams();

};

