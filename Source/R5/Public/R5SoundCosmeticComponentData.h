#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterSex -FallbackName=ER5BLCharacterSex
#include "ER5BLCharacterSex.h"
#include "R5SoundCosmeticComponentData.generated.h"

class UR5SoundCosmeticData;

UCLASS(Blueprintable)
class UR5SoundCosmeticComponentData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCharacterSex, UR5SoundCosmeticData*> NotifyParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCharacterSex, UR5SoundCosmeticData*> StateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCharacterSex, UR5SoundCosmeticData*> SoundByEventParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateIntParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxIntParameter;
    
    UR5SoundCosmeticComponentData();

};

