#pragma once
#include "CoreMinimal.h"
#include "BatteryCannon_LauncherData.h"
#include "R5AT_RangeWeapon_Launcher_Base.h"
#include "Templates/SubclassOf.h"
#include "R5AT_BatteryCannon_Launcher_Base.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5AT_BatteryCannon_Launcher_Base : public UR5AT_RangeWeapon_Launcher_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ImpactGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBatteryCannon_LauncherData> LaunchData;
    
    UR5AT_BatteryCannon_Launcher_Base();

};

