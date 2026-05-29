#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_FName -FallbackName=Optional_FName
#include "Optional_FName.h"
#include "R5CarrierComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CarrierComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptional_FName RequiredCollisionProfileName;
    
    UR5CarrierComponentParams();

};

