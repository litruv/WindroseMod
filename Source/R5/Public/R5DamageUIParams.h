#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DamageUIData.h"
#include "R5DamageUIParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DamageUIParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DamageUIData Data;
    
    UR5DamageUIParams();

};

