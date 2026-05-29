#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5CannonAmmoNomenclatureParams.generated.h"

class UR5CannonAmmoParams;

UCLASS(Blueprintable)
class R5_API UR5CannonAmmoNomenclatureParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5CannonAmmoParams>> AvailableAmmoParams;
    
    UR5CannonAmmoNomenclatureParams();

};

