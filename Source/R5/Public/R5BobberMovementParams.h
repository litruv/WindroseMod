#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BobberMovementData.h"
#include "R5BobberMovementParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BobberMovementParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BobberMovementData Data;
    
    UR5BobberMovementParams();

};

