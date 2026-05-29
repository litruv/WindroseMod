#pragma once
#include "CoreMinimal.h"
#include "R5DrawWeaponPerInstanceTimeData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5DrawWeaponPerInstanceTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDrawWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDetach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToPutAwayWeapon;
    
    FR5DrawWeaponPerInstanceTimeData();
};

